#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int solution(int a, int b) {
    b /= gcd(a, b);
    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;
    return (b != 1) + 1;
}