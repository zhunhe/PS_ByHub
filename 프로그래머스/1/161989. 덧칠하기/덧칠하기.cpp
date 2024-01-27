#include <bits/stdc++.h>
using namespace std;

int solution(int n, int m, vector<int> section) {
    vector<bool> painted(n + 1, true);
    for (auto n : section) painted[n] = false;
    int ans = 0;
    for (int i = 1; i < n + 1; i++) {
        if (painted[i]) continue;
        ++ans;
        for (int j = 0; j < m; j++) {
            if (i + j == n + 1) break;
            painted[i + j] = true;
        }
    }
    return ans;
}