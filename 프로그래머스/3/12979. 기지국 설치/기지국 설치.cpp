#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> stations, int w) {
    int ans = 0, s = 1;
    const double range = 2 * w + 1;
    for (const auto station : stations) {
        ans += ceil((station - s - w) / range);
        s = station + w + 1;
    }
    if (s <= n)
        ans += ceil((n - s + 1) / range);
    return ans;
}