#include <bits/stdc++.h>
using namespace std;

long long solution(string s) {
    map<string, string> m = {
        {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"}, {"five", "5"},
        {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}, {"zero", "0"}
    };
    for (auto [key, value] : m) s = regex_replace(s, regex(key), value);
    return stol(s);
}