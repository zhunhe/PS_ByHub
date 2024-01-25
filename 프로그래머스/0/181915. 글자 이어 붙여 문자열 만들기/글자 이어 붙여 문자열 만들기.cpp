#include <bits/stdc++.h>
using namespace std;

string solution(string s, vector<int> index_list) {
    string ans = "";
    for (auto i : index_list)
        ans += s[i];
    return ans;
}