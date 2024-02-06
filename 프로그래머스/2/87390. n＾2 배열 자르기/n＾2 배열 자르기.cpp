#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> ans(right - left + 1);
    int y = left / n, x = left % n;
    for (int i = 0; i < ans.size(); i++) {
        ans[i] = max(y, x) + 1;
        if (++x == n) {
            ++y;
            x = 0;
        }
    }
    return ans;
}