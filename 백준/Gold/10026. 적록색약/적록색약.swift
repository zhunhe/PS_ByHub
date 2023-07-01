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
let GREEN = "G"
let RED = "R"
let BLUE = "B"

let file = FileIO()
let n = file.readInt()
let map = (0..<n).map { _ in file.readString().map { String($0) } }
var visited = (0..<n).map { _ in (0..<n).map { _ in false } }
var queue = [(y: Int, x: Int)]()
var index = 0
var areaCount = 0
for i in 0..<n {
    for j in 0..<n {
        if visited[i][j] { continue }
        visited[i][j] = true
        let color = map[i][j]
        areaCount += 1
        queue.append((y: i, x: j))
        while index < queue.count {
            let now = queue[index]
            index += 1
            for k in 0..<4 {
                let (ny, nx) = (now.y + dy[k], now.x + dx[k])
                if ny < 0 || nx < 0 || ny >= n || nx >= n { continue }
                if map[ny][nx] != color { continue }
                if visited[ny][nx] { continue }
                visited[ny][nx] = true
                queue.append((y: ny, x: nx))
            }
        }
    }
}
visited = (0..<n).map { _ in (0..<n).map { _ in false } }
var greenRedBlindAreaCount = 0
for i in 0..<n {
    for j in 0..<n {
        if visited[i][j] { continue }
        visited[i][j] = true
        let color = map[i][j]
        greenRedBlindAreaCount += 1
        queue.append((y: i, x: j))
        while index < queue.count {
            let now = queue[index]
            index += 1
            for k in 0..<4 {
                let (ny, nx) = (now.y + dy[k], now.x + dx[k])
                if ny < 0 || nx < 0 || ny >= n || nx >= n { continue }
                if color == BLUE && map[ny][nx] != BLUE { continue }
                if color != BLUE && map[ny][nx] == BLUE { continue}
                if visited[ny][nx] { continue }
                visited[ny][nx] = true
                queue.append((y: ny, x: nx))
            }
        }
    }
}
print(areaCount, greenRedBlindAreaCount)