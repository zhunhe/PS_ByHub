#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
        if (!(n % i))
            ans += i + (i * i != n ? n / i : 0);
    return ans;
}