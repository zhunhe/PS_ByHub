#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string ans = "";
    bool mode = 0;
    for (int i = 0; i < s.size(); i++) {
        const char c = s[i];
        if (c == '1') mode ^= 1;
        if (c != '1' && i % 2 == mode) ans += c;
    }
    return !ans.empty() ? ans : "EMPTY";
}