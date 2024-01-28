#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> ingredient) {
    int ans = 0;
    string s = "";
    for (auto num : ingredient) {
        s += (num + '0');
        if (num == 1 && s.size() >= 4 && s.substr(s.size() - 4) == "1231") {
            ++ans;
            s.erase(s.size() - 4, 4);
        }
    }
    return ans;
}