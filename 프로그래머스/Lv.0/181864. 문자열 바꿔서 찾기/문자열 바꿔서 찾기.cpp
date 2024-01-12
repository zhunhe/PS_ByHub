#include <string>

using namespace std;

int solution(string s, string pat) {
    for (char& c : pat)
        c = c == 'A' ? 'B' : 'A';
    return s.find(pat) != string::npos;
}