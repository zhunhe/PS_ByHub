#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> dots) {
    int w = 0, h = 0;
    for (int i = 1; i < dots.size(); i++) {
        w = max(w, abs(dots[i][0] - dots[i - 1][0]));
        h = max(h, abs(dots[i][1] - dots[i - 1][1]));
    }
    return w * h;
}