import Foundation

func solution(_ numbers:[Int]) -> Double {
    var sum = 0
    for number in numbers {
        sum += number
    }
    return Double(sum) / Double(numbers.count)
}