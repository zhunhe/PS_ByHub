#include <bits/stdc++.h>
using namespace std;

double lean(vector<int> dot1, vector<int> dot2) {
    return (double)(dot2[1] - dot1[1]) / (double)(dot2[0] - dot1[0]);
}

int solution(vector<vector<int>> dots) {
    double lean1, lean2;
    if (lean(dots[0], dots[1]) == lean(dots[2], dots[3])) return 1;
    if (lean(dots[0], dots[2]) == lean(dots[1], dots[3])) return 1;
    if (lean(dots[0], dots[3]) == lean(dots[1], dots[2])) return 1;
    return 0;
}