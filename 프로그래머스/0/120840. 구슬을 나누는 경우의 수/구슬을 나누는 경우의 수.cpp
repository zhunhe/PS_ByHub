#include <bits/stdc++.h>
using namespace std;

int comb(int n, int r) {
    if (n == r || r == 0)
        return 1;
    return comb(n - 1, r - 1) + comb(n - 1, r);
}

int solution(int balls, int share) {
    return comb(balls, share);
}