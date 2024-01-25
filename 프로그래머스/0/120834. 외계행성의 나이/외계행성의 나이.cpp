#include <bits/stdc++.h>
using namespace std;

string solution(int age) {
    string ans = to_string(age);
    for (auto& c : ans) c += 'a' - '0';
    return ans;
}