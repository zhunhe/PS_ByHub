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
}

let file = FileIO()
let n = file.readInt()
let computers = [Int](0..<n * n).map { _ in file.readInt() }
let sum = computers.reduce(0, +)
var l = 1, r = computers.max()!, answer = 0
while l <= r {
    let mid: Int = (l + r) / 2
    var count = 0
    for computer in computers {
        count += min(computer, mid)
    }
    if Double(count) / Double(sum) >= 0.5 {
        r = mid - 1
        answer = mid
    } else {
        l = mid + 1
    }
}
print(answer)