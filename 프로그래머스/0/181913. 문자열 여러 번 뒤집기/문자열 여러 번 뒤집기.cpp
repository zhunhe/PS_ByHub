#include <bits/stdc++.h>
using namespace std;

string solution(string s, vector<vector<int>> queries) {
    for (const auto& v : queries) reverse(s.begin() + v[0], s.begin() + v[1] + 1);
    return s;
}