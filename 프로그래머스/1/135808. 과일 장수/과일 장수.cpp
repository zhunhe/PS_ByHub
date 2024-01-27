#include <bits/stdc++.h>
using namespace std;

int solution(int k, int m, vector<int> score) {
    priority_queue<int> pq;
    for (auto num : score) pq.push(num);
    int ans = 0;
    while (pq.size() >= m) {
        int _min = k;
        for (int i = 0; i < m; i++) _min = min(_min, pq.top()), pq.pop();
        ans += _min * m;
    }
    return ans;
}