#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> ans(2);
    for (auto num : num_list)
        ++ans[!!(num & 1)];
    return ans;
}