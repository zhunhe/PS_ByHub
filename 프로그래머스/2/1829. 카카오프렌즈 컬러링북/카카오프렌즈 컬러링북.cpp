#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    vector<int> ans(2);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (picture[i][j] == 0) continue;
            int color = picture[i][j];
            ++ans[0];
            queue<pair<int, int>> q;
            q.push({i, j});
            picture[i][j] = 0;
            int size = 1;
            while (!q.empty()) {
                auto [y, x] = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    const int ny = y + dy[k], nx = x + dx[k];
                    if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
                    if (picture[ny][nx] != color) continue;
                    ++size;
                    picture[ny][nx] = 0;
                    q.push({ny, nx});
                }
            }
            ans[1] = max(ans[1], size);
        }
    }
    return ans;
}