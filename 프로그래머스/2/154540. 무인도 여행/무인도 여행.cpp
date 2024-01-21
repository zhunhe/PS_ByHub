#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

vector<int> solution(vector<string> maps) {
    vector<int> ans;
    vector<vector<bool>> v(maps.size(), vector<bool>(maps[0].size()));
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            if (maps[i][j] == 'X' || v[i][j]) continue;
            queue<pair<int, int>> q;
            v[i][j] = true;
            q.push({i, j});
            int cnt = (maps[i][j] - '0');
            while (!q.empty()) {
                auto [y, x] = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    const int ny = y + dy[k], nx = x + dx[k];
                    if (ny < 0 || nx < 0 || ny >= maps.size() || nx >= maps[0].size()) continue;
                    if (maps[ny][nx] == 'X' || v[ny][nx]) continue;
                    v[ny][nx] = true;
                    q.push({ny, nx});
                    cnt = cnt + (maps[ny][nx] - '0');
                }
            }
            ans.push_back(cnt);
        }
    }
    if (ans.empty()) ans.push_back(-1);
    sort(ans.begin(), ans.end());
    return ans;
}