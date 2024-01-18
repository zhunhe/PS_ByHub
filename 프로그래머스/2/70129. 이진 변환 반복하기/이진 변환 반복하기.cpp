#include <string>
#include <bitset>
#include <regex>

#include <iostream>

using namespace std;

string toBinaryString(int num) {
    string s = "";
    while (num > 0) {
        s = (num & 1 ? "1" : "0") + s;
        num >>= 1;
    }
    return s;
}

vector<int> solution(string s) {
    vector<int> answer(2);
    while (s != "1") {
        ++answer[0];
        answer[1] += count(s.begin(), s.end(), '0');
        s = regex_replace(s, regex("0"), "");
        s = toBinaryString(s.size());
    }
    return answer;
}