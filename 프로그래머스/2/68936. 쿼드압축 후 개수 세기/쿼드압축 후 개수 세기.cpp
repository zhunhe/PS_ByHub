#include <bits/stdc++.h>
using namespace std;

vector<int> ans(2);

bool isAllSame(const vector<vector<int>>& arr, int y, int x, int len) {
    for (int i = y; i < y + len; i++)
        for (int j = x; j < x + len; j++)
            if (arr[y][x] != arr[i][j])
                return false;
    return true;
}

void dfs(const vector<vector<int>>& arr, int y, int x, int len) {
    if (len == 0) return;
    if (isAllSame(arr, y, x, len)) {
        ++ans[arr[y][x]];
        return;
    }
    len >>= 1;
    dfs(arr, y, x, len);
    dfs(arr, y, x + len, len);
    dfs(arr, y + len, x, len);
    dfs(arr, y + len, x + len, len);
}

vector<int> solution(vector<vector<int>> arr) {
    dfs(arr, 0, 0, arr.size());
    return ans;
}