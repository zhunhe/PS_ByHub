#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int luy = wallpaper.size(), lux = wallpaper[0].size();
    int rdy = 0, rdx = 0;
    for (int y = 0; y < wallpaper.size(); y++) {
        for (int x = 0; x < wallpaper[y].size(); x++) {
            if (wallpaper[y][x] == '.') continue;
            luy = min(luy, y);
            lux = min(lux, x);
            rdy = max(rdy, y);
            rdx = max(rdx, x);
        }
    }
    return {luy, lux, rdy + 1, rdx + 1};
}