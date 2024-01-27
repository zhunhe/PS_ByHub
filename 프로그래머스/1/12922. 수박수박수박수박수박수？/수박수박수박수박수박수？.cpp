#include <bits/stdc++.h>
using namespace std;

string solution(int n) {
    string ans = "";
    for (int i = 1; i < n; i += 2) ans += "수박";
    if (n & 1) ans += "수";
    return ans;
}