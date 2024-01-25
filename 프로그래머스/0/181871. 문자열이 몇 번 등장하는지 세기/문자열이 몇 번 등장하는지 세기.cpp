#include <bits/stdc++.h>
using namespace std;

int solution(string s, string pat) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        if (s.substr(i, pat.size()) == pat)
            ++ans;
    return ans;
}