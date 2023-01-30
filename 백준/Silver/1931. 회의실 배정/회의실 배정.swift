import Foundation

final class FileIO {

    @inline(__always) private var buffer: [UInt8] = Array(FileHandle.standardInput.readDataToEndOfFile()) + [0], index = 0

    @inline(__always) private func read() -> UInt8 {
        defer { index += 1 }
        return buffer.withUnsafeBufferPointer { $0[index] }
    }

    @inline(__always) func readInt32() -> Int32 {
        var sum: Int32 = 0, now = read(), isNegative = false
        while now == 10 || now == 32 { now = read() }
        if now == 45 { isNegative = true; now = read() }
        while 48...57 ~= now { sum = sum * 10 + Int32(now - 48); now = read() }
        return sum * (isNegative ? -1 : 1)
    }
}

let file = FileIO()

let n = file.readInt32()
var meetings = [(Int32, Int32)]()
for _ in 0 ..< n {
    meetings.append((file.readInt32(), file.readInt32()))
}

meetings.sort { $0.1 == $1.1 ? $0.0 < $1.0 : $0.1 < $1.1 }
var answer = 1
var endTime = meetings[0].1

for index in 1 ..< meetings.count {
    guard meetings[index].0 >= endTime else { continue }
    endTime = meetings[index].1
    answer += 1
}
print(answer)

