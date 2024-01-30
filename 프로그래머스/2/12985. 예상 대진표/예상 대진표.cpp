#include <bits/stdc++.h>
using namespace std;

int solution(int n, int a, int b) {
    int ans = 1;
    --a, --b;
    while (a > 0 || b > 0) {
        a >>= 1, b >>= 1;
        if (a == b) return ans;
        ++ans;
    }
    return ans;
}