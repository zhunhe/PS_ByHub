#include <bits/stdc++.h>
using namespace std;

long long solution(int k, int d) {
    long long ans = 0;
    for (int i = 0; i < d + 1; i += k) {
        ans += (long long)sqrt(powl(d, 2) - powl(i, 2)) / k + 1;
    }
    return ans;
}