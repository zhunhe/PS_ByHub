#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for (int num : arr)
        stk.empty() || stk.back() != num ? stk.push_back(num) : stk.pop_back();
    return !stk.empty() ? stk : vector<int>(1, -1);
}