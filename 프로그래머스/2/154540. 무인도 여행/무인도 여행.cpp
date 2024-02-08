#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

vector<int> solution(vector<string> maps) {
    vector<int> ans;
    for (int i = 0; i < maps.size(); i++) {
        for (int j = 0; j < maps[0].size(); j++) {
            if (maps[i][j] == 'X') continue;
            int day = maps[i][j] & 15;
            maps[i][j] = 'X';
            queue<pair<int, int>> q;
            q.push({i, j});
            while (!q.empty()) {
                const auto [y, x] = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    const int ny = y + dy[k], nx = x + dx[k];
                    if (ny < 0 || nx < 0 || ny >= maps.size() || nx >= maps[0].size()) continue;
                    if (maps[ny][nx] == 'X') continue;
                    day += maps[ny][nx] & 15;
                    maps[ny][nx] = 'X';
                    q.push({ny, nx});
                }
            }
            ans.push_back(day);
        }
    }
    sort(ans.begin(), ans.end());
    if (ans.empty()) ans.push_back(-1);
    return ans;
}