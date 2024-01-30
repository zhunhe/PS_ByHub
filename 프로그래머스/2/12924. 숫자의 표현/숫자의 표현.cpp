#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int ans = 0;
    for (int i = 1; i <= n >> 1; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += j;
            if (sum > n) break;
            if (sum == n) ++ans;
        }
    }
    return ans + 1;
}