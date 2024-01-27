#include <bits/stdc++.h>
using namespace std;

int solution(int num) {
    long long n = num;
    for (int i = 0; i < 501; i++) {
        if (n == 1) return i;
        n = n & 1 ? n * 3 + 1 : n >> 1;
    }
    return -1;
}