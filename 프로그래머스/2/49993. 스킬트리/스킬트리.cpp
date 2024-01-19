#include <bits/stdc++.h>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int ans = 0;
    for (auto s : skill_trees) {
        int idx, last = -1; bool ok = true;
        for (auto c : skill) {
            int idx = find(s.begin(), s.end(), c) - s.begin();
            if (last != -1 && idx < last) {
                ok = false;
                break;
            }
            last = idx;
        }
        if (ok) ++ans;
    }
    return ans;
}