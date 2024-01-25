#include <bits/stdc++.h>
using namespace std;

string solution(string my_string, int n) {
    string ans = "";
    for (const auto& c : my_string) for (int i = 0; i < n; i++) ans += c;
    return ans;
}