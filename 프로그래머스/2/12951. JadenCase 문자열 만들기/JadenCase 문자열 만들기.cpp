#include <string>

#include <iostream>

using namespace std;

string solution(string s) {
    bool makeUpper = true;
    for (char& c : s) {
        c = tolower(c);
        if (makeUpper) {
            makeUpper = false;
            c = toupper(c);
        }
        if (c == ' ')
            makeUpper = true;
    }
    return s;
}