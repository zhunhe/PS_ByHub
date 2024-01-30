#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n == 2) return true;
    if (n < 2 || !(n & 1)) return false;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int solution(int n, int k) {
    string s = "";
    while (n > 0) s = string(1, n % k + '0') + s, n /= k;
    s = regex_replace(s, regex("0"), " ");
    stringstream ss(s);

    int ans = 0;
    long long num;
    while (ss >> num)
        if (isPrime(num))
            ++ans;
    return ans;
}