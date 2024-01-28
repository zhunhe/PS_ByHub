#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> ans(4); ans[0] = wallpaper.size(), ans[1] = wallpaper[0].size();
    for (int i = 0; i < wallpaper.size(); i++) {
        for (int j = 0; j < wallpaper[i].size(); j++) {
            if (wallpaper[i][j] == '.') continue;
            ans[0] = min(ans[0], i); ans[1] = min(ans[1], j);
            ans[2] = max(ans[2], i); ans[3] = max(ans[3], j);
        }
    }
    ++ans[2]; ++ans[3];
    return ans;
}