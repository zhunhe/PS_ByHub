#include <bits/stdc++.h>
using namespace std;

int conv(const string t) {
    const int h = stoi(t.substr(0, 2));
    const int m = stoi(t.substr(3));
    return h * 60 + m;
}

vector<string> solution(vector<vector<string>> plans) {
    sort(plans.begin(), plans.end(), [](auto lhs, auto rhs) {
        return lhs[1] < rhs[1];
    });
    vector<string> ans;
    stack<pair<string, int>> stk;
    int before = conv(plans[0][1]);

    for (const auto& plan : plans) {
        const int now = conv(plan[1]);

        int diff = now - before;
        before = now;

        while (!stk.empty() && diff > 0) {
            auto subject = stk.top(); stk.pop();
            if (subject.second > diff) {
                stk.push({subject.first, subject.second - diff});
                diff = 0;
            } else {
                ans.push_back(subject.first);
                diff -= subject.second;
            }
        }
        stk.push({plan[0], stoi(plan[2])});
    }

    while (!stk.empty()) {
        ans.push_back(stk.top().first);
        stk.pop();
    }
    return ans;
}