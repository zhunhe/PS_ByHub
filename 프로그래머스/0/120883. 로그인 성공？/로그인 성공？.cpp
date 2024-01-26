#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string ans = "fail";
    for (const auto& v : db) {
        if (v[0] == id_pw[0] && v[1] == id_pw[1]) return "login";
        if (v[0] == id_pw[0]) ans = "wrong pw";
    }
    return ans;
}