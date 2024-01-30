#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int> pq;
    for (auto elem : scoville) pq.push(-elem);
    int ans = 0;
    while (pq.size() > 1 && -pq.top() < K) {
        const int a = pq.top(); pq.pop();
        const int b = pq.top() * 2; pq.pop();
        pq.push(a + b);
        ++ans;
    }
    return -pq.top() < K ? -1 : ans;
}