#include <bits/stdc++.h>
using namespace std;

int solution(int left, int right) {
    int ans = 0;
    for (int i = left; i < right + 1; i++)
        pow((int)sqrt(i), 2) == i ? ans -= i : ans += i;
    return ans;
}