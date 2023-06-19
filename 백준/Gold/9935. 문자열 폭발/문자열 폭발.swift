let line = readLine()!
let bomb = Array(readLine()!)
let bombLength = bomb.count
var answer = [Character]()
for c in line {
    answer.append(c)
    if isDelete(answer, bomb) {
        answer.removeLast(bomb.count)
    }
}
print(answer.isEmpty ? "FRULA" : String(answer))

func isDelete(_ answer: [Character], _ bomb: [Character]) -> Bool {
    if answer.count < bomb.count {
        return false
    }
    for i in 1...bomb.count where answer[answer.count - i] != bomb[bomb.count - i] {
        return false
    }
    return true
}