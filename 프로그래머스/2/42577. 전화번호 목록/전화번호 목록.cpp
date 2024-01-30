#include <bits/stdc++.h>
using namespace std;

bool solution(vector<string> v) {
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        const int len = min(v[i - 1].size(), v[i].size());
        if (v[i - 1].substr(0, len) == v[i].substr(0, len))
            return false;
    }
    return true;
}