#include <string>

using namespace std;

string solution(string s, string p) {
    for (int i = s.size() - p.size(); i >= 0; i--)
        if (s.substr(i, p.size()) == p)
            return s.substr(0, i + p.size());
    return "";
}