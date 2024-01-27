#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    vector<bool> prime(n + 1, true);
    for (long long i = 2; i < n + 1; i++) {
        if (!prime[i]) continue;
        for (long long j = i * i; j < n + 1; j += i)
            prime[j] = false;
    }
    return count(prime.begin() + 2, prime.end(), true);
}