#include <bits/stdc++.h>
using namespace std;

int solution(int n, int r) {
    if (n == r || r == 0)
        return 1;
    return solution(n - 1, r - 1) + solution(n - 1, r);
}