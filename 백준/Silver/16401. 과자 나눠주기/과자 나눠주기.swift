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

let m = file.readInt(), n = file.readInt()

var snackSticks = [Int]()
for _ in 0 ..< n {
    snackSticks.append(file.readInt())
}

var l = 1, r = snackSticks.max()!
var answer = 0
while l <= r {
    let mid = (l + r) / 2
    var countOfSnack = 0
    for snackStick in snackSticks {
        countOfSnack += snackStick / mid
    }
    if countOfSnack >= m {
        l = mid + 1
        answer = max(answer, mid)
    } else {
        r = mid - 1
    }
}
print(answer)
