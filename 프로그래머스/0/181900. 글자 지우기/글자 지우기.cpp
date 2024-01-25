#include <bits/stdc++.h>
using namespace std;

string solution(string s, vector<int> indices) {
    vector<bool> isAdded(s.size(), true);
    for (auto idx : indices) isAdded[idx] = false;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
        if (isAdded[i])
            ans += s[i];
    return ans;
}