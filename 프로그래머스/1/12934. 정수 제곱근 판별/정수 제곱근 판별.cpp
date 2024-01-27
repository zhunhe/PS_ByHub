#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    return powl(sqrt(n), 2) == n ? powl(sqrt(n) + 1, 2) : -1;
}