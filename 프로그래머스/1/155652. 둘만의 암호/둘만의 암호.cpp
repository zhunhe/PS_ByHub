#include <bits/stdc++.h>
using namespace std;

string solution(string s, string skip, int index) {
    for (auto& c : s) {
        for (int i = 0; i < index; i++) {
            if (++c == 'z' + 1)
                c = 'a';
            while (skip.find(c) != string::npos)
                if (++c == 'z' + 1)
                    c = 'a';
        }
    }
    return s;
}