#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    const int cnt = __builtin_popcount(n);
    int ans = n + 1;
    while (__builtin_popcount(ans) != cnt)
        ++ans;
    return ans;
}