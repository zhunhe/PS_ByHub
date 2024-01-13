#include <vector>

using namespace std;

#define R   0
#define D   1
#define L   2
#define U   3

const int dy[4] = {0, 1, 0, -1};
const int dx[4] = {1, 0, -1, 0};

bool canMove(const vector<vector<int>>& m, int n, int y, int x, int dir) {
    if (dir == R && (x == n - 1 || m[y][x + 1])) return false;
    if (dir == D && (y == n - 1 || m[y + 1][x])) return false;
    if ((dir == L) && (x == 0 || m[y][x - 1])) return false;
    if ((dir == U) && (y == 0 || m[y - 1][x])) return false;
    return true;
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> m(n, vector<int>(n));
    int y = 0, x = 0, num = 1, dir = 0;
    while (num <= n * n) {
        m[y][x] = num++;
        if (!canMove(m, n, y, x, dir))
            dir = (dir + 1) % 4;
        y += dy[dir], x += dx[dir];
    }
    return m;
}