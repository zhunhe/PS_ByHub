#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b) {
    if (a & 1 && b & 1)
        return a * a + b * b;
    if (a & 1 || b & 1)
        return (a + b) << 1;
    return abs(a - b);
}