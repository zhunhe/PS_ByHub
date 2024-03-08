#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> babbling) {
    const vector<string> cannotsay = {"ayaaya", "yeye", "woowoo", "mama"};
    const vector<string> cansay = {"aya", "ye", "woo", "ma"};
    int ans = 0;
    for (auto s : babbling) {
        for (auto str : cannotsay)
            s = regex_replace(s, regex(str), "1");
        for (auto str : cansay)
            s = regex_replace(s, regex(str), " ");
        s = regex_replace(s, regex(" "), "");
        if (s.empty())
            ++ans;
    }
    return ans;
}