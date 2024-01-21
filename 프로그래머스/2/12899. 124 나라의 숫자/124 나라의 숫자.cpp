#include <bits/stdc++.h>
using namespace std;

string solution(int n) {
    --n;
    string charset = "124";
    string ans = "";
    while (n >= 0) {
        ans = charset[n % 3] + ans;
        n /= 3;
        --n;
    }
    return ans;
}