#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> vv) {
    for (int i = 1; i < vv.size(); i++) {
        vv[i][0] += vv[i - 1][0];
        for (int j = 1; j < i; j++)
            vv[i][j] += max(vv[i - 1][j - 1], vv[i - 1][j]);
        vv[i][i] += vv[i - 1][i - 1];
    }
    return *max_element(vv.back().begin(), vv.back().end());
}