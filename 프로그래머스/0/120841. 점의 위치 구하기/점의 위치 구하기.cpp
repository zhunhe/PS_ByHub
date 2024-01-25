#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> dot) {
    const int y = dot[0], x = dot[1];
    if (y > 0 && x > 0) return 1;
    if (y < 0 && x > 0) return 2;
    if (y < 0 && x < 0) return 3;
    return 4;
}