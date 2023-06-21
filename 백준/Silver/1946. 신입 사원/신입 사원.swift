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

struct Data {
    let paper: Int
    let interview: Int
}

let file = FileIO()
let t = file.readInt()
for _ in 0..<t {
    let n = file.readInt()
    var candidates = Array(0..<n).map { _ in
        Data(paper: file.readInt(), interview: file.readInt())
    }
    candidates.sort {
        $0.paper < $1.paper
    }
    var interviewCutline = candidates[0].interview
    var answer = 1
    for i in 1..<n where candidates[i].interview < interviewCutline {
        interviewCutline = candidates[i].interview
        answer += 1
    }
    print(answer)
}