#include <bits/stdc++.h>
using namespace std;

int ans, len;
bool visited[8];
vector<vector<int>> d;

void dfs(int remain, int depth) {
    ans = max(ans, depth);
    if (depth == len) return;
    for (int i = 0; i < len; i++) {
        if (visited[i]) continue;
        if (remain < d[i][0]) continue;
        visited[i] = true;
        dfs(remain - d[i][1], depth + 1);
        visited[i] = false;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    len = dungeons.size();
    d = dungeons;
    dfs(k, 0);
    return ans;
}