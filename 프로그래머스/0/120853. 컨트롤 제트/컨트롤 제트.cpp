#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    stringstream ss(s);
    vector<int> v;
    while (ss >> s) s == "Z" ? v.pop_back() : v.push_back(stoi(s));
    return accumulate(v.begin(), v.end(), 0);
}