#include <string>
#include <vector>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int solution(vector<vector<string>> b, int y, int x) {
    int ans = 0;
    for (int k = 0; k < 4; k++) {
        const int ny = y + dy[k];
        const int nx = x + dx[k];
        if (ny < 0 || nx < 0 || ny >= b.size() || nx >= b[0].size()) continue;
        if (b[ny][nx] != b[y][x]) continue;
        ++ans;
    }
    return ans;
}