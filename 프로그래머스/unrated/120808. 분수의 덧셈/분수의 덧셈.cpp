#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int denom = denom1 * denom2;
    int numer = numer1 * denom2 + numer2 * denom1;
    const int gcdNumber = gcd(denom, numer);
    denom /= gcdNumber;
    numer /= gcdNumber;
    vector<int> answer = {numer, denom};
    return answer;
}