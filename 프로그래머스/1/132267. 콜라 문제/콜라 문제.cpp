#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b, int n) {
    int ans = 0;
    while (n >= a) {
        ans += n / a * b;
        n = n / a * b + n % a;
    }
    return ans;
}