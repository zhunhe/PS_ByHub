#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int k) {
    vector<int> ans;
    for (int i = k; i < n + 1; i += k)
        ans.push_back(i);
    return ans;
}