#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    return accumulate(s.begin(), s.end(), 0, [](int x, char c) { return x + c - '0'; }) % 9;
}