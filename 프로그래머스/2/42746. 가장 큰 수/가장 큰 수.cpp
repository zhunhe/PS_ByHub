#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> v) {
    deque<string> ans;
    for (const auto& elem : v) ans.push_back(to_string(elem));
    sort(ans.begin(), ans.end(), [](auto lhs, auto rhs) { return lhs + rhs > rhs + lhs; });
    while (ans.size() > 1 && ans.front() == "0") ans.pop_front();
    return accumulate(ans.begin(), ans.end(), string(""));
}