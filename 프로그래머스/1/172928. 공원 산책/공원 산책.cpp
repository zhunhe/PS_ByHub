#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char, pair<int, int>> m = {
    {'E', {0, 1}}, {'W', {0, -1}}, {'S', {1, 0}}, {'N', {-1, 0}}
};

vector<int> solution(vector<string> park, vector<string> routes) {
    int y, x, h = park.size(), w = park[0].size();
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if (park[i][j] == 'S')
                y = i, x = j;
    for (const string& route : routes) {
        const char dir = route[0];
        const int dist = route[2] - '0';
        const int ny = y + m[dir].first * dist;
        const int nx = x + m[dir].second * dist;
        if (ny < 0 || nx < 0 || ny >= h || nx >= w) continue;
        bool cannotMove = false;
        if (dir == 'E')
            for (int i = x; i <= nx; i++)
                if (park[y][i] == 'X')
                    cannotMove = true;
        if (dir == 'W')
            for (int i = x; i >= nx; i--)
                if (park[y][i] == 'X')
                    cannotMove = true;
        if (dir == 'S')
            for (int i = y; i <= ny; i++)
                if (park[i][x] == 'X')
                    cannotMove = true;
        if (dir == 'N')
            for (int i = y; i >= ny; i--)
                if (park[i][x] == 'X')
                    cannotMove = true;
        if (cannotMove) continue;
        y = ny, x = nx;
    }
    return {y, x};
}