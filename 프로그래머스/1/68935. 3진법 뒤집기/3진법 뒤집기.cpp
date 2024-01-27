#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    string s = "";
    while (n > 0) s += char(n % 3 + '0'), n /= 3;
    int ans = 0;
    for (auto c : s) ans = ans * 3 + c - '0';
    return ans;
}