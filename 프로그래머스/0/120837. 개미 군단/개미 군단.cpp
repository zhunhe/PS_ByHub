#include <bits/stdc++.h>
using namespace std;

int solution(int hp) {
    int ans = hp / 5;
    hp %= 5;
    ans += hp / 3;
    hp %= 3;
    ans += hp;
    return ans;
}