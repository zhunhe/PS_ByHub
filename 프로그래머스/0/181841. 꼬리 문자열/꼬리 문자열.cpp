#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> v, string ex) {
    string ans = "";
    for (auto s : v)
        if (s.find(ex) == string::npos)
            ans += s;
    return ans;
}