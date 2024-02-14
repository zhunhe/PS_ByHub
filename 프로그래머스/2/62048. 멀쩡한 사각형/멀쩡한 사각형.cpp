#include <bits/stdc++.h>
using namespace std;

int cnt(int y, int x) {
    if (y > x) swap(y, x);
    const double lean = (double)y / x;
    int ret = 1;
    for (int i = 1; i < x; i++)  {
        ++ret;
        const int left = (i - 1) * lean;
        const int right = i * lean;
        if (left < right) ++ret;
    }
    return ret;
}

long long solution(int w, int h) {
    const int _gcd = gcd(w, h);
    return (long long)w * h - cnt(w / _gcd, h / _gcd) * _gcd;
}