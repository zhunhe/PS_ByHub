#include <bits/stdc++.h>
using namespace std;

int solution(int h, int w, vector<string> b) {
    int ans = 0;
    bool finish = false;

    while (!finish) {
        vector<vector<bool>> d(h, vector<bool>(w));
        finish = true;
        for (int y = 0; y < h - 1; y++) {
            for (int x = 0; x < w - 1; x++) {
                if (b[y][x] == ' ') continue;
                if (b[y][x] != b[y][x + 1]) continue;
                if (b[y][x] != b[y + 1][x]) continue;
                if (b[y][x] != b[y + 1][x + 1]) continue;
                d[y][x] = d[y][x + 1] = d[y + 1][x] = d[y + 1][x + 1] = true;
            }
        }
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
                if (d[y][x])
                    ans += d[y][x], b[y][x] = ' ', finish = false;

        for (int x = 0; x < w; x++) {
            int cnt = 0;
            for (int y = 0; y < h; y++)
                cnt += d[y][x];
            if (cnt == 0) continue;
            stack<char> st;
            for (int y = 0; y < h; y++) {
                if (b[y][x] != ' ') {
                    st.push(b[y][x]);
                    b[y][x] = ' ';
                }
            }
            for (int y = h - 1; y >= 0; y--) {
                if (!st.empty()) {
                    b[y][x] = st.top();
                    st.pop();
                }
            }
        }
    }
    return ans;
}