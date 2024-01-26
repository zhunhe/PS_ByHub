#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> babbling) {
    int ans = 0;
    for (auto s : babbling) {
        s = regex_replace(s, regex("aya|ye|woo|ma"), " ");
        s = regex_replace(s, regex(" "), "");
        if (s.empty()) ++ans;
    }
    return ans;
}