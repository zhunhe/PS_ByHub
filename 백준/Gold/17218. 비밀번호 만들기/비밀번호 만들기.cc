#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

string dp[42][42];

int main() {
    FASTIO
    string s1, s2; cin >> s1 >> s2;
    s1 = " " + s1; s2 = " " + s2;
    const int len1 = s1.size(), len2 = s2.size();
    for (int y = 1; y < len1; y++) {
        for (int x = 1; x < len2; x++) {
            if (s1[y] == s2[x])
                dp[y][x] = dp[y - 1][x - 1] + s2[x];
            else if (dp[y - 1][x].size() > dp[y][x - 1].size())
                dp[y][x] = dp[y - 1][x];
            else
                dp[y][x] = dp[y][x - 1];
        }
    }
    cout << dp[len1 - 1][len2 - 1] << '\n';
}