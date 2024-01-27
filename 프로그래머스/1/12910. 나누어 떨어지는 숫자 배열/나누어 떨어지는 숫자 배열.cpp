#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> ans;
    for (auto num : arr) if (!(num % divisor)) ans.push_back(num);
    sort(ans.begin(), ans.end());
    if (ans.empty()) ans.push_back(-1);
    return ans;
}