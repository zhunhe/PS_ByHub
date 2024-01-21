#include <bits/stdc++.h>
using namespace std;

bool ok = true;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

vector<vector<bool>> visited;

void dfs(int depth, int y, int x, const vector<string>& place) {
    if (depth != 0 && place[y][x] == 'P')
        ok = false;
    if (!ok || depth == 2)
        return;
    for (int k = 0; k < 4; k++) {
        const int ny = y + dy[k], nx = x + dx[k];
        if (ny < 0 || nx < 0 || ny >= place.size() || nx >= place[0].size()) continue;
        if (place[ny][nx] == 'X') continue;
        if (visited[ny][nx]) continue;
        visited[ny][nx] = true;
        dfs(depth + 1, ny, nx, place);
    }
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> ans;
    
    for (auto place : places) {
        ok = true;
        visited.resize(0, vector<bool>(0));
        visited.resize(place.size(), vector<bool>(place[0].size()));
        for (int i = 0; i < place.size(); i++) {
            for (int j = 0; j < place[0].size(); j++) {
                if (place[i][j] != 'P') continue;
                visited[i][j] = true;
                dfs(0, i, j, place);
            }
        }   
        ans.push_back(ok);
    }
    return ans;
}