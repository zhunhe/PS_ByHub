#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> gems) {
    set<string> st(gems.begin(), gems.end());
    const int allCnt = st.size();
    unordered_map<string, int> m;
    vector<int> ans = {1, static_cast<int>(gems.size())};
    for (int l = 0, r = 0; r < gems.size(); r++) {
        ++m[gems[r]];
        while (l <= r && m.size() == allCnt) {
            if (r - l < ans[1] - ans[0])
                ans = {l + 1, r + 1};
            if (--m[gems[l]] == 0)
                m.erase(gems[l]);
            l++;
        }
    }
    return ans;
}