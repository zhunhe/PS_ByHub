#include <bits/stdc++.h>
using namespace std;

string order;

map<string, int> menu[11];
vector<bool> visited;

void dfs(int start, string s) {
    ++menu[s.size()][s];
    if (s.size() == order.size())
        return;
    for (int i = start; i < order.size(); i++) {
        if (visited[i]) continue;
        visited[i] = true;
        dfs(i + 1, s + order[i]);
        visited[i] = false;
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    for (const auto& s : orders) {
        order = s;
        sort(order.begin(), order.end());
        visited.resize(0);
        visited.resize(order.size());
        dfs(0, "");
    }
    vector<string> ans;
    for (const auto len : course) {
        int maxCnt = -1;
        for (const auto& [key, val] : menu[len])
            if (val > 1)
                maxCnt = max(maxCnt, val);
        for (const auto& [key, val] : menu[len])
            if (val == maxCnt)
                ans.push_back(key);
    }
    sort(ans.begin(), ans.end());
    return ans;
}