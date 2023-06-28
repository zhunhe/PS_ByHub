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

let dy = [-1, 0, 1, 0]
let dx = [0, 1, 0, -1]

let file = FileIO()
let h = file.readInt(), w = file.readInt()
var board: [[Int]] = (0..<h).map { _ in (0..<w).map { _ in file.readInt() } }
var queue = [(y: Int, x: Int)]()
var pictureCount = 0
var maxPictureSize = 0
for i in 0..<h {
    for j in 0..<w {
        if board[i][j] == 0 { continue }
        board[i][j] = 0
        pictureCount += 1
        queue.append((y: i, x: j))
        var pictureSize = 1
        while queue.isEmpty == false {
            let (y, x) = queue.removeFirst()
            for k in 0..<4 {
                let (ny, nx) = (y + dy[k], x + dx[k])
                if ny < 0 || nx < 0 || ny >= h || nx >= w { continue }
                if board[ny][nx] == 0 { continue }
                board[ny][nx] = 0
                pictureSize += 1
                queue.append((y: ny, x: nx))
            }
        }
        maxPictureSize = max(maxPictureSize, pictureSize)
    }
}
print(pictureCount)
print(maxPictureSize)