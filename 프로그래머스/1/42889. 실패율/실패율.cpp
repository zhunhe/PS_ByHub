#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> notClear(N + 2);
    for (auto person : stages) ++notClear[person];
    vector<pair<double, int>> failureRate(N);
    for (int i = 1; i < N + 1; i++) {
        int reached = reduce(notClear.begin() + i, notClear.end());
        failureRate[i - 1].first = reached == 0 ? 0 : (double)notClear[i] / reached;
        failureRate[i - 1].second = i;
    }
    sort(failureRate.begin(), failureRate.end(), [](auto lhs, auto rhs) {
        if (lhs.first == rhs.first)
            return lhs.second < rhs.second;
        return lhs.first > rhs.first;
    });
    vector<int> ans;
    for (auto elem : failureRate) ans.push_back(elem.second);
    return ans;
}