#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> dots) {
    vector<int> dot1(2, 987654321), dot2(2, -987654321);
    for (const vector<int> dot: dots) {
        dot1[0] = min(dot1[0], dot[0]);
        dot1[1] = min(dot1[1], dot[1]);
        dot2[0] = max(dot2[0], dot[0]);
        dot2[1] = max(dot2[1], dot[1]);
    }
    return (dot2[1] - dot1[1]) * (dot2[0] - dot1[0]);
}