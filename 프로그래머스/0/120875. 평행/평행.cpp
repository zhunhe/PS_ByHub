#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> dots) {
    const double y1 = dots[0][1], x1 = dots[0][0];
    const double y2 = dots[1][1], x2 = dots[1][0];
    const double y3 = dots[2][1], x3 = dots[2][0];
    const double y4 = dots[3][1], x4 = dots[3][0];
    if ((y2 - y1) / (x2 - x1) == (y4 - y3) / (x4 - x3)) return 1;
    if ((y3 - y1) / (x3 - x1) == (y4 - y2) / (x4 - x2)) return 1;
    if ((y4 - y1) / (x4 - x1) == (y3 - y2) / (x3 - x2)) return 1;
    return 0;
}