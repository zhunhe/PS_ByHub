#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int dp[42][42];
string dp_string[42][42];

int main() {
    FASTIO
    string s1, s2; cin >> s1 >> s2;
    const int len1 = s1.size(), len2 = s2.size();
    for (int y = 1; y < len1 + 1; y++) {
        for (int x = 1; x < len2 + 1; x++) {
            if (s1[y - 1] == s2[x - 1]) {
                dp[y][x] = dp[y - 1][x - 1] + 1;
                dp_string[y][x] = dp_string[y - 1][x - 1] + s2[x - 1];
            }
            else if (dp[y - 1][x] > dp[y][x - 1]) {
                dp[y][x] = dp[y - 1][x];
                dp_string[y][x] = dp_string[y - 1][x];
            } else {
                dp[y][x] = dp[y][x - 1];
                dp_string[y][x] = dp_string[y][x - 1];
            }
        }
    }
    cout << dp_string[len1][len2];
}