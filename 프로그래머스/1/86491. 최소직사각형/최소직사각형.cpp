#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int _max = 0, _min = 0;
    for (auto v : sizes) {
        _max = max(_max, max(v[0], v[1]));
        _min = max(_min, min(v[0], v[1]));
    }
    return _max * _min;
}