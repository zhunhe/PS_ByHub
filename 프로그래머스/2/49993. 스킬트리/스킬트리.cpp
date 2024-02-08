#include <bits/stdc++.h>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int ans = 0;
    for (const auto& skill_tree : skill_trees) {
        vector<int> pos(skill.size(), 999);
        for (int i = 0; i < skill.size(); i++) {
            int idx = skill_tree.find(skill[i]);
            if (idx != string::npos)
                pos[i] = idx;
        }
        bool fail = false;
        for (int i = 1; i < pos.size(); i++)
            if (pos[i - 1] > pos[i])
                fail = true;
        if (!fail)
            ++ans;
    }
    return ans;
}