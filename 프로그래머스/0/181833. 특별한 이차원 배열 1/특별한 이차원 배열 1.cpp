#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> ans(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        ans[i][i] = 1;
    return ans;
}