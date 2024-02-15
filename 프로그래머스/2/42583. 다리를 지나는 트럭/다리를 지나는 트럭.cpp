#include <bits/stdc++.h>
using namespace std;

int solution(int len, int w, vector<int> trucks) {
    int ans = 1;
    vector<int> bridge(len);
    int idx = 0;
    bridge[0] = trucks[idx++];
    int total = bridge[0];
    while (total) {
        ++ans;
        total -= bridge.back();
        rotate(bridge.begin(), bridge.end() - 1, bridge.end());
        bridge[0] = 0;
        if (idx < trucks.size() && total + trucks[idx] <= w) {
            bridge[0] = trucks[idx++];
            total += bridge[0];
        }
    }
    return ans;
}