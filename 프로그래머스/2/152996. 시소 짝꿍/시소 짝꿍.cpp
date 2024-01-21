#include <bits/stdc++.h>
using namespace std;

long long solution(vector<int> weights) {
    map<double, long long> m;
    for (auto weight : weights) ++m[weight];
    long long ans = 0;
    for (auto [w, cnt] : m) ans += cnt * (cnt - 1) >> 1;
    set<long long> st;
    for (auto [w, cnt] : m) st.insert(w);
    for (auto elem : st) {
        ans += m[elem*2.0/3] * m[elem];
        ans += m[elem*2.0/4] * m[elem];
        ans += m[elem*3.0/4] * m[elem];
    }
    return ans;
}