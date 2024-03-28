import Foundation

func solution(_ n:Int) -> Int {
    var ans = 0
    for i in 0...n where i & 1 == 0 {
        ans += i
    }
    return ans
}