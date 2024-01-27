#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [=](auto lhs, auto rhs) {
        if (lhs[n] == rhs[n])
            return lhs < rhs;
        return lhs[n] < rhs[n];
    });
    return strings;
}