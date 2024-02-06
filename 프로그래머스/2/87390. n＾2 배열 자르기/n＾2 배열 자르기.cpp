#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> ans;
    for (long long i = left; i < right + 1; i++)
        ans.push_back(max(i / n, i % n) + 1);
    return ans;
}