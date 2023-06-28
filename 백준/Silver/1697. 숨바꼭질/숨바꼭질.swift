import Foundation

final class FileIO {
    @inline(__always) private var buffer: [UInt8] = Array(FileHandle.standardInput.readDataToEndOfFile()) + [0], index = 0

    @inline(__always) private func read() -> UInt8 {
        defer { index += 1 }
        return buffer.withUnsafeBufferPointer { $0[index] }
    }

    @inline(__always) func readInt() -> Int {
        var sum: Int = 0, now = read(), isNegative = false
        while now == 10 || now == 32 { now = read() }
        if now == 45 { isNegative = true; now = read() }
        while 48...57 ~= now { sum = sum * 10 + Int(now - 48); now = read() }
        return sum * (isNegative ? -1 : 1)
    }
    
    @inline(__always) func readString() -> String {
        var str = ""
        var now = read()
        while now == 10 || now == 32 { now = read() }
        while now != 10 && now != 32 && now != 0 {
            str += String(bytes: [now], encoding: .ascii)!
            now = read()
        }
        return str
    }
}

let MAX = 100000
let NOT_VISIT = -1
let file = FileIO()
let start = file.readInt(), goal = file.readInt()
var map = Array(repeating: NOT_VISIT, count: MAX + 1)
var queue = [Int]()
queue.append(start)
map[start] = 0
var idx = 0
while idx < queue.count {
    let now = queue[idx]
    idx += 1
    for next in [now - 1, now + 1, now * 2] {
        if next < 0 || next > MAX { continue }
        if map[next] != NOT_VISIT { continue }
        map[next] = map[now] + 1
        queue.append(next)
    }
}
print(map[goal])