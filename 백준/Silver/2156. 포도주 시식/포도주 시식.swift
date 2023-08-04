import Foundation

let n = Int(readLine()!)!
var dp = Array(repeating: 0, count: n+3)
var wine = Array(repeating: 0, count: n+3)

for i in 1..<n + 1 {
    wine[i] = Int(readLine()!)!
}

dp[1] = wine[1]
dp[2] = wine[1] + wine[2]
dp[3] = max(dp[0] + wine[2] + wine[3], dp[1] + wine[3])
dp[3] = max(dp[2], dp[3])

if n > 3 {
    for i in 4..<n + 1 {
        dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i])
        dp[i] = max(dp[i - 1], dp[i])
    }
}

print(dp[n])