#include <bits/stdc++.h>
using namespace std;

int solution(int k, vector<int> tangerine) {
    map<int, int> m;
    for (auto size : tangerine) ++m[size];
    priority_queue<int> pq;
    for (auto [size, cnt] : m) pq.push(cnt);
    int ans = 0;
    while (k > 0) {
        k -= pq.top(); pq.pop();
        ++ans;
    }
    return ans;
}