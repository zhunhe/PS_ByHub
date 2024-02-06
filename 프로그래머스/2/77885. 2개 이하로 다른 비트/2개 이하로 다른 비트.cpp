#include <bits/stdc++.h>
using namespace std;

vector<long long> solution(vector<long long> numbers) {
    for (auto& l : numbers) {
        if (!(l & 1)) {
            l |= 1;
            continue;
        }
        long long i = 1LL;
        while (l & i) i <<= 1;
        l ^= i;
        i >>= 1;
        l ^= i;
    }
    return numbers;
}