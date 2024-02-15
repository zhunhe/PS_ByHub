#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int s) {
    if (n > s) return {-1};
    vector<int> ans(n, s / n);
    s %= n;
    int i = ans.size() - 1;
    while (s--)
        ++ans[i--];
    return ans;
}