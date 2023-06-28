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

let NOT_VISIT = -1
let file = FileIO()
let floor = file.readInt()
let start = file.readInt()
let goal = file.readInt()
let up = file.readInt()
let down = file.readInt()
var visited = Array(repeating: NOT_VISIT, count: floor + 1)
visited[0] = 0
var queue = [Int]()
queue.append(start)
visited[start] = 0
while queue.isEmpty == false {
    let now = queue.removeFirst()
    for next in [now + up, now - down] {
        guard next <= floor && next >= 1 else { continue }
        guard visited[next] == NOT_VISIT else { continue }
        visited[next] = visited[now] + 1
        queue.append(next)
    }
}
print(visited[goal] == NOT_VISIT ? "use the stairs" : visited[goal])