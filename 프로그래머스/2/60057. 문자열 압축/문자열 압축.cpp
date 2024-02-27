#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int ans = s.size();
    for (int len = s.size() / 2; len > 0; len--) {
        string str = "";
        int pos = 0, cnt = 0;
        string substr = s.substr(pos, len);
        while (pos < s.size()) {
            if (substr == s.substr(pos, len)) {
                ++cnt;
            } else {
                if (cnt == 1)
                    str += substr;
                else
                    str += to_string(cnt) + substr;
                substr = s.substr(pos, len);
                cnt = 1;
            }
            pos += len;
        }
        if (cnt == 1)
            str += substr;
        else
            str += to_string(cnt) + substr;
        ans = min(ans, (int)str.size());
    }
    return ans;
}