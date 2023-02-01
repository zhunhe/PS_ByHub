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

let n = file.readInt(), m = file.readInt()

var times = [Int]()
for _ in 0 ..< n {
    times.append(file.readInt())
}

var l = 1, r = times.max()! * m
var answer = 0
while l <= r {
    let mid = (l + r) / 2
    var countOfBalloon = 0
    for time in times {
        countOfBalloon += mid / time
    }
    if countOfBalloon >= m {
        r = mid - 1
        answer = mid
    } else {
        l = mid + 1
    }
}
print(answer)
