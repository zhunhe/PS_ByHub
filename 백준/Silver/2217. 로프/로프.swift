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
var ropes = [Int](0..<n).map { _ in file.readInt() }
ropes.sort(by: >)
var answer = ropes[0]
var minWeight = ropes[0]
for i in 1..<ropes.count {
    minWeight = min(minWeight, ropes[i])
    answer = max(answer, minWeight * (i + 1))
}
print(answer)