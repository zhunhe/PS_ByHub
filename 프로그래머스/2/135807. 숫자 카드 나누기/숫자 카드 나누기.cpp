#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int gcd(const vector<int>& v, int s, int e) {
    int ret = v[0];
    for (int i = 1; i < v.size(); i++)
        ret = gcd(ret, v[i]);
    return ret;
}

bool canDivide(const vector<int>& v, int divisor) {
    for (int i = 0; i < v.size(); i++)
        if (v[i] % divisor == 0)
            return true;
    return false;
}

int calMinDivisor(int num) {
    for (int i = 2; i < num + 1; i++)
        if (num % i == 0)
            return i;
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    int gcdA = gcd(arrayA, 0, arrayA.size() - 1);
    int gcdB = gcd(arrayB, 0, arrayB.size() - 1);
    while (gcdA > 1 || gcdB > 1) {
        if (gcdA > gcdB) {
            if (!canDivide(arrayB, gcdA)) break;
            gcdA /= calMinDivisor(gcdA);
        } else {
            if (!canDivide(arrayA, gcdB)) break;
            gcdB /= calMinDivisor(gcdB);
        }
    }
    return gcdA == 1 && gcdB == 1 ? 0 : max(gcdA, gcdB);
}