#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& lhs, const pair<int, int>& rhs) {
    return lhs.first > rhs.first;
}

int cnt[100002];

vector<int> solution(string s) {
    s = regex_replace(s, regex("[},\\{]"), " ");
    stringstream ss(s); int num;
    while (ss >> num) ++cnt[num];
    vector<pair<int, int>> v;
    for (int i = 0; i < 100001; i++)
        if (cnt[i])
            v.push_back({cnt[i], i});
    sort(v.begin(), v.end(), cmp);
    vector<int> ans;
    for (auto elem : v) ans.push_back(elem.second);
    return ans;
}