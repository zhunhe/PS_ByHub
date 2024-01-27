#include <bits/stdc++.h>
using namespace std;

long long solution(int a, int b) {
    long long ans = 0;
    for (int i = min(a, b); i < max(a, b) + 1; i++) ans += i;
    return ans;
}