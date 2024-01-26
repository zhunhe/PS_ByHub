#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> sides) {
    int ans = 0;
    for (int i = 1; i < sides[0] + sides[1]; i++) {
        vector<int> v = sides;
        v.push_back(i);
        sort(v.begin(), v.end());
        if (v[0] + v[1] > v[2]) ++ans;
    }
    return ans;
}