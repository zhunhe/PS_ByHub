#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    priority_queue<int> pq;
    vector<int> ans;
    for (int n : score) {
        pq.push(-n);
        while (pq.size() > k) pq.pop();
        ans.push_back(-pq.top());
    }
    return ans;
}