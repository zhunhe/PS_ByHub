#include <string>

using namespace std;

string solution(string s) {
    for (char& c : s)
        c = c == 'a' || c == 'A' ? 'A' : tolower(c);
    return s;
}