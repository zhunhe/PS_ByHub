#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int c) {
    int ans = a + b + c;
    if (a == b || b == c || c == a)
        ans *= (pow(a, 2) + pow(b, 2) + pow(c, 2));
    if (a == b && b == c)
        ans *= (pow(a, 3) + pow(b, 3) + pow(c, 3));
    return ans;
}