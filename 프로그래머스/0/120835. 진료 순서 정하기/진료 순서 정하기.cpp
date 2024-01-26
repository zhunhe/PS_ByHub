#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> emergency) {
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < emergency.size(); i++) pq.push({emergency[i], i});
    int rank = 1;
    while (!pq.empty())
        emergency[pq.top().second] = rank++, pq.pop();
    return emergency;
}