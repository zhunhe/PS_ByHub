#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    s = regex_replace(s, regex("\\{\\{|}}"), "");
    s = regex_replace(s, regex("}|,|\\{"), " ");
    map<int, int> m;
    stringstream ss(s); int num;
    while (ss >> num) ++m[num];
    priority_queue<pair<int, int>> pq;
    for (auto [key, value] : m) pq.push({value, key});
    vector<int> ans;
    while (!pq.empty())
        ans.push_back(pq.top().second), pq.pop();
    return ans;
}