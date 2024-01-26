#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    int i = 0;
    vector<int> stk;
    for (int i = 0; i < arr.size();)
    while (i < arr.size()) {
        if (stk.empty() || stk.back() < arr[i])
            stk.push_back(arr[i]), ++i;
        else
            stk.pop_back();
    }
    return stk;
}