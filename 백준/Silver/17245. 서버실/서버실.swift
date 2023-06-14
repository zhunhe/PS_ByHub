import Foundation

final class FileIO {
    @inline(__always) private var buffer: [UInt8] = Array(FileHandle.standardInput.readDataToEndOfFile()) + [0], index = 0

    @inline(__always) private func read() -> UInt8 {
        defer { index += 1 }
        return buffer.withUnsafeBufferPointer { $0[index] }
    }

    @inline(__always) func readUInt() -> UInt {
        var sum: UInt = 0, now = read()
        while now == 10 || now == 32 { now = read() }
        while 48...57 ~= now { sum = sum * 10 + UInt(now - 48); now = read() }
        return sum
    }
}

let file = FileIO()
let n = file.readUInt()
let computers = [UInt](0..<n * n).map { _ in file.readUInt() }
let sum = computers.reduce(0, +)
var l: UInt = 1, r = computers.max()!, answer: UInt = 0
while l <= r {
    let mid: UInt = (l + r) / 2
    var count: UInt = 0
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