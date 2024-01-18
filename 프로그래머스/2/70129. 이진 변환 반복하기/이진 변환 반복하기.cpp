#include <string>
#include <bitset>
#include <regex>

#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    while (s != "1") {
        ++answer[0];
        answer[1] += count(s.begin(), s.end(), '0');
        s = regex_replace(s, regex("0"), "");
        int len = s.size();
        s = "";
        while (len > 0) {
            s = (len & 1 ? "1" : "0") + s;
            len >>= 1;
        }
    }
    return answer;
}