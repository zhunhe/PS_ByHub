#include <bits/stdc++.h>
using namespace std;

long long solution(int n, vector<int> times) {
    long long l = 0, r = *max_element(times.begin(), times.end()) * (long long)n;
    long long ans = r;
    while (l <= r) {
        const long long mid = (l + r) >> 1;
        long long cnt = 0;
        for (const auto& time : times) cnt += mid / time;
        if (cnt >= n) {
            ans = min(ans, mid);
            r = mid - 1;
        } else
            l = mid + 1;
    }
    return r + 1;
}