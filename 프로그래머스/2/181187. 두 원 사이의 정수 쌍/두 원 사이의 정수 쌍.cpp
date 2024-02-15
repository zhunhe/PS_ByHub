#include <bits/stdc++.h>
using namespace std;

long long solution(int r1, int r2) {
    long long ans = 0, r1r1 = powl(r1, 2), r2r2 = powl(r2, 2);
    for (int i = 1; i < r2 + 1; i++) {
        ans += sqrt(r2r2 - powl(i, 2)) + 1;
        if (i <= r1)
            ans -= ceil(sqrt(r1r1 - powl(i, 2)));
    }
    return ans << 2;
}