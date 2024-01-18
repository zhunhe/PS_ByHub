#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    int ans = 0;
    while (pq.size() > 1 && pq.top() < K) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        pq.push(a + b * 2);
        ++ans;
    }
    return pq.empty() || pq.top() < K ? -1 : ans;
}