#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> m;
    for (auto s : completion) ++m[s];
    for (auto s : participant) {
        if (m.find(s) == m.end()) return s;
        if (--m[s] == 0) m.erase(s);
    }
    return "";
}