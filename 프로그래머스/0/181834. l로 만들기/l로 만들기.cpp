#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    for (auto& c : s)
        if (c < 'l')
            c = 'l';
    return s;
}