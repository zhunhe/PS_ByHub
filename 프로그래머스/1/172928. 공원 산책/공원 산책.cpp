#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> m = { {'N', 0}, {'E', 1}, {'S', 2}, {'W', 3} };

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

bool isValidRoute(const vector<string>& park, char dir, int y, int x, int count) {
    for (int i = 1; i < count + 1; i++) {
        const int ny = y + dy[m[dir]] * i, nx = x + dx[m[dir]] * i;
        if (park[ny][nx] == 'X')
            return false;
    }
    return true;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    int y, x;
    for (int i = 0; i < park.size(); i++) {
        for (int j = 0; j < park[0].size(); j++) {
            if (park[i][j] != 'S') continue;
            y = i, x = j;
            break;
        }
    }
    for (auto s : routes) {
        stringstream ss(s);
        char dir; int count;
        ss >> dir >> count;

        const int ny = y + dy[m[dir]] * count, nx = x + dx[m[dir]] * count;
        if (ny < 0 || nx < 0 || ny >= park.size() || nx >= park[0].size()) continue;
        if (!isValidRoute(park, dir, y, x, count)) continue;
        y = ny, x = nx;
    }
    return {y, x};
}