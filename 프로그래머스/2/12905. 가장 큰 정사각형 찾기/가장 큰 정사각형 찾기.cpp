#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> b) {
    int ans = b[0][0];
    for (int i = 1; i < b.size(); i++) {
        for (int j = 1; j < b[0].size(); j++) {
            if (b[i][j] == 0) continue;
            b[i][j] = min({b[i-1][j-1], b[i-1][j], b[i][j-1]}) + 1;
            ans = max(ans, b[i][j] * b[i][j]);
        }
    }
    return ans;
}