#include <bits/stdc++.h>
using namespace std;

const string charset = "124";

string solution(int n) {
    string ans = "";
    while (n > 0) ans = charset[--n % 3] + ans, n /= 3;
    return ans;
}