#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int m) {
    return {gcd(n, m), n * m / gcd(n, m)};
}