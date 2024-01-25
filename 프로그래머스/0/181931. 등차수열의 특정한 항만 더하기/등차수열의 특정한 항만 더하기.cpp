#include <bits/stdc++.h>
using namespace std;

int solution(int a, int d, vector<bool> included) {
    int ans = 0;
    for (auto b : included) {
        if (b) ans += a;
        a += d;
    }
    return ans;
}