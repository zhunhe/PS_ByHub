#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define MAX 1002

int dp[MAX][MAX];
string answer;

int main() {
    FASTIO
    string s1, s2; cin >> s1 >> s2;
    s1 = " " + s1; s2 = " " + s2;
    const int len1 = s1.size(), len2 = s2.size();
    for (int y = 1; y < len1; y++) {
        for (int x = 1; x < len2; x++) {
            if (s1[y] == s2[x])
                dp[y][x] = dp[y - 1][x - 1] + 1;
            else if (dp[y - 1][x] > dp[y][x - 1])
                dp[y][x] = dp[y - 1][x];
            else
                dp[y][x] = dp[y][x - 1];
        }
    }
    int i = len1 - 1, j = len2 - 1;
    while (i > 0 && j > 0) {
        if (dp[i][j] == dp[i - 1][j])
            i--;
        else if(dp[i][j] == dp[i][j - 1])
            j--;
        else {
            answer = s1[i] + answer;
            i--;
            j--;
        }
    }
    cout << dp[len1 - 1][len2 - 1] << '\n';
    cout << answer;
}