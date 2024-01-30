#include <bits/stdc++.h>
using namespace std;

int countOne(int n) {
    int cnt = 0;
    for (int i = 1; i < 33; i <<= 1)
        if (n & i) ++cnt;
    return cnt;
}

int solution(int n) {
    int cnt = countOne(n);
    int ans = n + 1;
    while (countOne(ans) != cnt)
        ++ans;
    return ans;
}