#include <bits/stdc++.h>
using namespace std;

long long gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

long long solution(int w, int h) {
    long long ans = (long long)w * h;
    const long long _gcd = gcd(w, h);
    w /= _gcd, h /= _gcd;
    return ans - (w + h - 1) * _gcd;
}