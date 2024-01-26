#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

unordered_map<string, int> m = { {"down", 0}, {"right", 1}, {"up", 2}, {"left", 3} };

vector<int> solution(vector<string> keyinput, vector<int> board) {
    const int w = board[0] / 2, h = board[1] / 2;
    int x = 0, y = 0;
    for (const auto& dir : keyinput) {
        const int nx = x + dx[m[dir]], ny = y + dy[m[dir]];
        if (abs(nx) > w || abs(ny) > h) continue;
        x = nx, y = ny;
    }
    return {x, y};
}