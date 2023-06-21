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

public struct PriorityQueue<T> {
    var nodes: [T] = []
    let comparer: (T,T) -> Bool

    var isEmpty: Bool {
        return nodes.isEmpty
    }
    var count: Int {
        return nodes.count
    }

    init(comparer: @escaping (T,T) -> Bool) {
        self.comparer = comparer
    }

    func peek() -> T? {
        return nodes.first
    }

    mutating func push(_ element: T) {
        var index = nodes.count
        nodes.append(element)
        while index > 0, !comparer(nodes[index],nodes[(index - 1) / 2]) {
            nodes.swapAt(index, (index - 1) / 2)
            index = (index - 1) / 2
        }
    }

    mutating func pop() -> T? {
        guard !nodes.isEmpty else {
            return nil
        }

        if nodes.count == 1 {
            return nodes.removeFirst()
        }

        let result = nodes.first
        nodes.swapAt(0, nodes.count-1)
        _ = nodes.popLast()

        var index = 0
        while index < nodes.count {
            let left = index * 2 + 1, right = left + 1

            if right < nodes.count {
                if comparer(nodes[left], nodes[right]), !comparer(nodes[right], nodes[index]) {
                    nodes.swapAt(right, index)
                    index = right
                } else if !comparer(nodes[left], nodes[index]){
                    nodes.swapAt(left, index)
                    index = left
                } else {
                    break
                }
            } else if left < nodes.count {
                if !comparer(nodes[left], nodes[index]) {
                    nodes.swapAt(left, index)
                    index = left
                } else {
                    break
                }
            } else {
                break
            }
        }
        return result
    }
}

extension PriorityQueue where T: Comparable {
    init() {
        self.init(comparer: <)
    }
}

struct Data {
    let mass: Int
    let price: Int
}

let file = FileIO()
let n = file.readInt(), k = file.readInt()
var jewels = Array(0..<n).map { _ in Data(mass: file.readInt(), price: file.readInt()) }
var bags = Array(0..<k).map { _ in file.readInt() }
jewels.sort { $0.mass < $1.mass }
bags.sort(by: <)
var pq = PriorityQueue<Int>()
var answer = 0
var jewelIndex = 0
for bag in bags {
    while jewelIndex < jewels.count && jewels[jewelIndex].mass <= bag {
        pq.push(jewels[jewelIndex].price)
        jewelIndex += 1
    }
    answer += pq.pop() ?? 0
}
print(answer)