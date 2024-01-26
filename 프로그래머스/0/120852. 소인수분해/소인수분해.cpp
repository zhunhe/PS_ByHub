#include <bits/stdc++.h>
using namespace std;

vector<int> makePrimes(int n) {
    vector<bool> isPrimes(n + 1, true);
    for (int i = 2; i < n + 1; i++) {
        if (!isPrimes[i]) continue;
        for (int j = i * i; j < n + 1; j += i)
            isPrimes[j] = false;
    }
    vector<int> prime;
    for (int i = 2; i < n + 1; i++) if (isPrimes[i]) prime.push_back(i);
    return prime;
}

vector<int> solution(int n) {
    vector<int> ans;
    auto primes = makePrimes(n);
    for (auto prime : primes) {
        if (n % prime == 0) {
            ans.push_back(prime);
            n /= prime;
        }
        if (n == 0) break;
    }
    return ans;
}