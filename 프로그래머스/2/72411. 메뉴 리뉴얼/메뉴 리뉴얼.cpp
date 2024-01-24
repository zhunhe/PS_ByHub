#include <bits/stdc++.h>
using namespace std;

int maxLen;
map<string, int> m[11];

void dfs(string tmp, int start, const string& order) {
    if (tmp.size() > maxLen) return;
    if (tmp.size() >= 2)
        ++m[tmp.size()][tmp];
    for (int i = start; i < order.size(); i++)
        dfs(tmp + order[i], i + 1, order);
}

vector<string> solution(vector<string> orders, vector<int> course) {
    maxLen = *max_element(course.begin(), course.end());
    for (string& s : orders) sort(s.begin(), s.end());
    for (auto order : orders) dfs("", 0, order);
    vector<string> ans;
    for (auto i : course) {
        if (m[i].empty()) continue;
        priority_queue<pair<int, string>> pq;
        for (auto [s, cnt] : m[i]) if (cnt > 1) pq.push({cnt, s});
        if (pq.empty()) continue;
        const int count = pq.top().first;
        ans.push_back(pq.top().second); pq.pop();
        while (!pq.empty() && count == pq.top().first) {
            ans.push_back(pq.top().second); pq.pop();
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}