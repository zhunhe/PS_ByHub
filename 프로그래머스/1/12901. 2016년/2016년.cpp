#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    const vector<string> day = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    vector<int> month = {0, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    for (int i = 1; i < 13; i++) month[i] += month[i - 1];
    return day[(month[a] + b) % 7];
}