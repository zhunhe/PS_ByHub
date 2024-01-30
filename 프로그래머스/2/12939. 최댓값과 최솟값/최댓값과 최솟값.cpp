#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    stringstream ss(s);
    int _min = INT_MAX, _max = INT_MIN, tmp;
    while (ss >> tmp) _min = min(_min, tmp), _max = max(_max, tmp);
    return to_string(_min) + " " + to_string(_max);
}