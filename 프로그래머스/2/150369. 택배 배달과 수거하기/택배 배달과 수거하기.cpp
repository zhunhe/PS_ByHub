#include <bits/stdc++.h>
using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long ans = 0;
    int a = 0, b = 0;
    for (int i = n - 1; i >= 0; i--) {
        a += deliveries[i], b += pickups[i];
        while (a > 0 || b > 0) {
            a -= cap, b -= cap;
            ans += i + 1;
        }
    }
    return ans << 1;
}