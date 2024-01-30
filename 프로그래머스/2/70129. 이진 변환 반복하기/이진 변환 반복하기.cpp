#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    vector<int> ans(2);
    while (s != "1") {
        int len = count(s.begin(), s.end(), '1');
        ans[1] += s.size() - len;
        s = "";
        while (len > 0) {
            s = (len & 1 ? "1" : "0") + s;
            len >>= 1;
        }
        ++ans[0];
    }
    return ans;
}