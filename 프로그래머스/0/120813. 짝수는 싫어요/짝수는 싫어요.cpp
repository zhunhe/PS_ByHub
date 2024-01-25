#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n) {
    vector<int> ans;
    for (int i = 1; i < n + 1; i += 2)
        ans.push_back(i);
    return ans;
}