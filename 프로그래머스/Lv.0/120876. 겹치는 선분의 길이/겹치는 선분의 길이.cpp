#include <bits/stdc++.h>
using namespace std;

int cnts[201];

int solution(vector<vector<int>> lines) {
    for (auto& line : lines) {
        ++cnts[line[0] + 100];
        --cnts[line[1] + 100];
    }
    int ans = cnts[0] > 1;
    for (int i = 1; i < 201; i++) {
        cnts[i] += cnts[i - 1];
        if (cnts[i] > 1) ++ans;
    }
    return ans;
}