#include <string>

using namespace std;

string solution(string s, string p) {
    return s.substr(0, s.rfind(p) + p.size());
}