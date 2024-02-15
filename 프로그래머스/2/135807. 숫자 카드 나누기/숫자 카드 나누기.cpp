#include <bits/stdc++.h>
using namespace std;

bool dividedByNumber(const vector<int>& v, int number) {
    for (const auto num : v)
        if (num % number == 0)
            return true;
    return false;
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    int gcdA = arrayA[0], gcdB = arrayB[0];
    for (const auto a : arrayA) gcdA = gcd(gcdA, a);
    for (const auto b : arrayB) gcdB = gcd(gcdB, b);
    int ans = 0;
    if (!dividedByNumber(arrayA, gcdB))
        ans = max(ans, gcdB);
    if (!dividedByNumber(arrayB, gcdA))
        ans = max(ans, gcdA);
    return ans;
}