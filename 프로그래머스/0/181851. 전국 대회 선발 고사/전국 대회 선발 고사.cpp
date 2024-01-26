#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < rank.size(); i++)
        if (attendance[i])
            pq.push({-rank[i], i});
    int ans = 0;
    for (int i = 0; i < 3; i++)
        ans = ans * 100 + pq.top().second, pq.pop();
    return ans;
}