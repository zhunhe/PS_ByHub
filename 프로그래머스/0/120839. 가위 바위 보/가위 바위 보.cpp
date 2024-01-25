#include <bits/stdc++.h>
using namespace std;

string solution(string rsp) {
    for (auto & c : rsp)
        c = (c == '2' ? '0' : c == '5' ? '2' : '5');
    return rsp;
}