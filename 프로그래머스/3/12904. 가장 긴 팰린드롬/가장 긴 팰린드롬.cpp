#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            --l, ++r;
        }
        l = i, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            --l, ++r;
        }
    }
    return ans;
}