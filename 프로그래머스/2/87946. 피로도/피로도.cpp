#include <bits/stdc++.h>
using namespace std;

int ans;
vector<vector<int>> d;
bool visited[8];

void dfs(int depth, int k) {
    if (k >= 0) ans = max(ans, depth);
    if (k < 0 || depth == d.size()) return;
    for (int i = 0; i < d.size(); i++) {
        if (visited[i]) continue;
        visited[i] = true;
        if (k >= d[i][0])
            dfs(depth + 1, k - d[i][1]);
        visited[i] = false;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    d = dungeons;
    dfs(0, k);
    return ans;
}