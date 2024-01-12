#include <string>

using namespace std;

string solution(string s) {
    for (char& c : s)
        c = c < 'l' ? 'l' : c;
    return s;
}