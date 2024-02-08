#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v) {
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
        ans = max(ans, min(v[i], (int)v.size() - i));
    return ans;
}