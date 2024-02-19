#include <bits/stdc++.h>
using namespace std;

long long solution(int n, vector<int> works) {
    if (n >= reduce(works.begin(), works.end())) return 0;
    long long ans = 0;
    priority_queue<int> pq;
    for (const auto work : works) pq.push(work);
    while (!pq.empty() && n--) {
        const int work = pq.top();
        pq.pop();
        pq.push(work - 1);
    }
    while (!pq.empty()) {
        ans += powl(pq.top(), 2);
        pq.pop();
    }
    return ans;
}