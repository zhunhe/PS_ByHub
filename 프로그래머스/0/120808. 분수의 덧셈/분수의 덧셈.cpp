#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int a = numer1 * denom2 + numer2 * denom1;
    int b = denom1 * denom2;
    int _gcd = gcd(a, b);
    return {a / _gcd, b / _gcd};
}