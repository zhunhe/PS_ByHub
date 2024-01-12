#include <string>

using namespace std;

string solution(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] != '0')
            return s.substr(i);
    return s;
}