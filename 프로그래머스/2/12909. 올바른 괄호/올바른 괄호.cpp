#include <bits/stdc++.h>
using namespace std;

bool solution(string s) {
    int cnt = 0;
    for (const auto& c : s) {
        c == '(' ? ++cnt : --cnt;
        if (cnt < 0) return false;
    }
    return cnt == 0;
}