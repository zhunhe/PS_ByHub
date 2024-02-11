#include <bits/stdc++.h>
using namespace std;

int solution(int len, int w, vector<int> trucks) {
    vector<int> bridge(len);
    bridge[0] = trucks[0];
    int ans = 1, idx = 1, now = bridge[0];
    while (now > 0) {
        now -= bridge.back();
        for (int i = bridge.size() - 1; i > 0; i--) bridge[i] = bridge[i - 1];
        bridge[0] = 0;
        ++ans;
        if (idx == trucks.size()) continue;
        if (now + trucks[idx] > w) continue;
        bridge[0] = trucks[idx++];
        now += bridge[0];
    }
    return ans;
}