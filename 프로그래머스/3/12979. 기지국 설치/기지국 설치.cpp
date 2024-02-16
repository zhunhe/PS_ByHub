#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> stations, int w) {
    int ans = 0, s = 1;
    const int range = 2 * w + 1;
    for (const auto station : stations) {
        ans += (station - s - w + range - 1) / range;
        s = station + w + 1;
    }
    ans += (n - s + 1 + range - 1) / range;
    return ans;
}