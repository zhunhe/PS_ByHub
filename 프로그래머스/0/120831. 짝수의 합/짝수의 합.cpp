#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int ans = 0;
    for (int i = 2; i < n + 1; i += 2)
        ans += i;
    return ans;
}