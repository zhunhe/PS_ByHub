#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, int> m;
    for (int i = 0; i < plays.size(); i++)
        if (m.find(genres[i]) == m.end())
            m[genres[i]] = m.size();
    vector<vector<pair<int, int>>> v(m.size());    // playtime, index
    for (int i = 0; i < plays.size(); i++)
        v[m[genres[i]]].push_back({plays[i], i});
    sort(v.begin(), v.end(), [](auto lhs, auto rhs) {
        int sum1 = 0, sum2 = 0;
        for (const auto elem : lhs) sum1 += elem.first;
        for (const auto elem : rhs) sum2 += elem.first;
        return sum1 > sum2;
    });
    vector<int> ans;
    for (int i = 0; i < v.size(); i++) {
        sort(v[i].begin(), v[i].end(), [](auto lhs, auto rhs) {
            if (lhs.first == rhs.first)
                return lhs.second < rhs.second;
            return lhs.first > rhs.first;
        });
        int len = min(2UL, v[i].size());
        for (int j = 0; j < len; j++)
            ans.push_back(v[i][j].second);
    }
    return ans;
}