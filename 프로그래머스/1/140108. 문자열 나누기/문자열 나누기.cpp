#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int ans = 0, cnt = 0;
    char x = s[0];
    for (int i = 0; i < s.size(); i++) {
        s[i] == x ? ++cnt : --cnt;
        if (cnt == 0) {
            ++ans;
            cnt = 0;
            if (i - 1 < s.size()) x = s[i + 1];
        }
    }
    return ans + (cnt != 0);
}