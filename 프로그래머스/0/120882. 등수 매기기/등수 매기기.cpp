#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < score.size(); i++)
        pq.push({score[i][0] + score[i][1], i});
    vector<int> ans(score.size());
    int rank = 1, last = -1, count = 1;
    while (!pq.empty()) {
        rank = count;
        ans[pq.top().second] = rank, ++count;
        last = pq.top().first;
        pq.pop();
        while (!pq.empty() && pq.top().first == last) {
            ans[pq.top().second] = rank, ++count;
            pq.pop();
        }
    }
    return ans;
}