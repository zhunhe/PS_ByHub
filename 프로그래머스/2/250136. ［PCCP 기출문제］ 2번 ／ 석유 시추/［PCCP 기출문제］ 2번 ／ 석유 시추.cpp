#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<int>> land) {
    int num = 1;
    vector<set<int>> cnt(land[0].size());
    unordered_map<int, int> m;   // number, size
    for (int i = 0; i < land.size(); i++) {
        for (int j = 0; j < land[0].size(); j++) {
            if (land[i][j] == 0) continue;
            queue<pair<int, int>> q;
            land[i][j] = 0;
            q.push({i, j});
            int size = 1;
            cnt[j].insert(num);
            while (!q.empty()) {
                const auto [y, x] = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    const int ny = y + dy[k], nx = x + dx[k];
                    if (ny < 0 || nx < 0 || ny >= land.size() || nx >= land[0].size()) continue;
                    if (land[ny][nx] == 0) continue;
                    ++size;
                    land[ny][nx] = 0;
                    cnt[nx].insert(num);
                    q.push({ny, nx});
                }
            }
            m[num++] = size;
        }
    }
    int ans = 0;
    for (int i = 0; i < land[0].size(); i++) {
        int sum = 0;
        for (auto elem : cnt[i])
            sum += m[elem];
        ans = max(ans, sum);
    }
    return ans;
}