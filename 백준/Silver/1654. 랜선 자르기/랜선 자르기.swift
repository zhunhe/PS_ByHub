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
let lineCount = file.readInt(), need = file.readInt()
let lineLengths = [Int](0..<lineCount).map { _ in file.readInt() }
var start = 1, end = lineLengths.max()!, answer = 1
while start <= end {
    let mid: Int = (start + end) / 2
    var count = 0
    for lineLength in lineLengths {
        count += Int(lineLength / mid)
    }
    if count < need {
        end = mid - 1
    } else {
        start = mid + 1
        answer = max(answer, mid)
    }
}
print(answer)