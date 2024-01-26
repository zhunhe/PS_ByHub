#include <bits/stdc++.h>
using namespace std;

string solution(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans = "";
    int carry = 0, i = 0;
    for (; i < a.size() && i < b.size(); i++) {
        int digit = a[i] + b[i] - '0' * 2;
        ans += (digit + carry) % 10 + '0';
        carry = (digit + carry >= 10);
    }
    for (; i < a.size(); i++) {
        int digit = a[i] - '0';
        ans += (digit + carry) % 10 + '0';
        carry = (digit + carry >= 10);
    }
    for (; i < b.size(); i++) {
        int digit = b[i] - '0';
        ans += (digit + carry) % 10 + '0';
        carry = (digit + carry >= 10);
    }
    if (carry == 1) ans += "1";
    reverse(ans.begin(), ans.end());
    return ans;
}