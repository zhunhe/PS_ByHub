#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> stations, int w) {
    int ans = 0, s = 1;
    const double range = 2 * w + 1;
    for (const auto station : stations) {
        ans += (station - s - w + range - 1) / range;
        s = station + w + 1;
    }
    ans += (n - s + range) / range;
    return ans;
}