let line = readLine()!
let bomb = readLine()!
let bombLength = bomb.count
var answer = [Character]()
for character in line {
    answer.append(character)
    while character == bomb.last! && answer.count >= bombLength && String(answer[answer.count - bombLength..<answer.count]) == bomb {
        answer.removeLast(bombLength)
    }
}
print(answer.isEmpty ? "FRULA" : String(answer))