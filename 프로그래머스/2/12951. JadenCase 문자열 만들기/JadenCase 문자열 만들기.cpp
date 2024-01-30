#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    bool upper = true;
    for (auto& c : s) {
        if (c == ' ')
            upper = true;
        else if (upper) {
            c = toupper(c);
            upper = false;
        } else
            c = tolower(c);
    }
    return s;
}