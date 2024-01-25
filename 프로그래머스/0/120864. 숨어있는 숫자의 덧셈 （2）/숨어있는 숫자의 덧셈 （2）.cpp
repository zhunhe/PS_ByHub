#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    s = regex_replace(s, regex("[a-zA-Z]"), " ");
    stringstream ss(s);
    int ans = 0; int tmp;
    while (ss >> tmp)
        ans += tmp;
    return ans;
}