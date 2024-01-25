#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> ans(2);
    for (auto num : num_list)
        num & 1 ? ++ans[1] : ++ans[0];
    return ans;
}