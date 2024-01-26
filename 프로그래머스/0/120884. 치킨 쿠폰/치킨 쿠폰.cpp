#include <bits/stdc++.h>
using namespace std;

int solution(int chic) {
    int ans = 0, coupon = 0;
    while (chic >= 10) {
        coupon += chic / 10;
        ans += coupon;
        chic = chic % 10 + coupon;
        coupon = 0;
    }
    return ans;
}