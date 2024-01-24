#include <bits/stdc++.h>
using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long ans = 0;
    int d = 0, p = 0;
    for (int i = n - 1; i >= 0; i--) {
        int cnt = 0;
        d -= deliveries[i];
        p -= pickups[i];
        while (d < 0 || p < 0) {
            d += cap, p += cap;
            ++cnt;
        }
        ans += (i + 1) * 2 * cnt;
    }
    return ans;
}