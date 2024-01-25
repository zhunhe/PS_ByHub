#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> v) {
    return accumulate(v.begin(), v.end(), string(""));
}