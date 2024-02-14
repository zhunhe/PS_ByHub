#include <bits/stdc++.h>
using namespace std;

long long solution(int k, int d) {
    long long ans = 0, dd = (long long)d * d;
    for (long long i = 0; i < d + 1; i += k) {
        ans += (int)sqrt(dd - i * i) / k + 1;
    }
    return ans;
}