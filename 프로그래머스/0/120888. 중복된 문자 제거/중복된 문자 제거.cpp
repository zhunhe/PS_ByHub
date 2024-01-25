#include <bits/stdc++.h>
using namespace std;

bool visited[256];

string solution(string s) {
    string ans = "";
    for (const auto& c : s) {
        if (!visited[c]) ans += c;
        visited[c] = true;
    }
    return ans;
}