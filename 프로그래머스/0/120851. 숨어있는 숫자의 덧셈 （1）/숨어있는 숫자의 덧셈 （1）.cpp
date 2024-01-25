#include <bits/stdc++.h>
using namespace std;

int solution(string my_string) {
    int ans = 0;
    for (const auto& c : my_string) if (isdigit(c)) ans += c - '0';
    return ans;
}