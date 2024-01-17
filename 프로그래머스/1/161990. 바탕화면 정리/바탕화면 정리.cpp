#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> ans = {50, 50, 0, 0};

    for (int y = 0; y < wallpaper.size(); y++) {
        for (int x = 0; x < wallpaper[y].size(); x++) {
            if (wallpaper[y][x] == '.') continue;
            ans[0] = min(ans[0], y);
            ans[1] = min(ans[1], x);
            ans[2] = max(ans[2], y);
            ans[3] = max(ans[3], x);
        }
    }
    ++ans[2], ++ans[3];
    return ans;
}