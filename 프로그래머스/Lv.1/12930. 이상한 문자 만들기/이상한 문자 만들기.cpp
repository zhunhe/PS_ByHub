#include <string>

using namespace std;

string solution(string s) {
    int idx = 1;
    for (char& c : s) {
        if (c == ' ') idx = 0;
        c = idx & 1 ? toupper(c) : tolower(c);
        ++idx;
    }
    return s;
}