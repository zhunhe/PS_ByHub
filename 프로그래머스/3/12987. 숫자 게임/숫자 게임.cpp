#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    sort(A.rbegin(), A.rend());
    priority_queue<int> pq;
    for (const auto b : B) pq.push(b);
    int ans = 0;
    for (const auto a : A) {
        if (pq.top() > a) {
            pq.pop();
            ++ans;
        }
    }
    return ans;
}