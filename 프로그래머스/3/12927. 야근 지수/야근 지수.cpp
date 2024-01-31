#include <bits/stdc++.h>
using namespace std;

long long solution(int n, vector<int> works) {
    priority_queue<long long> pq;
    for (const auto& work : works) pq.push(work);
    while (n-- && !pq.empty()) {
        const int work = pq.top(); pq.pop();
        if (work > 0)
            pq.push(work - 1);
    }
    long long ans = 0;
    while (!pq.empty())
        ans += powl(pq.top(), 2), pq.pop();
    return ans;
}