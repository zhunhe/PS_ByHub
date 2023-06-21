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
let roadLengths = [Int](0..<n - 1).map { _ in file.readInt() }
let oilPrices = [Int](0..<n).map { _ in file.readInt() }
var answer = 0
var minPrice = oilPrices[0]
for i in 0..<n-1 {
    answer = answer + roadLengths[i] * minPrice
    minPrice = min(minPrice, oilPrices[i + 1])
}
print(answer)