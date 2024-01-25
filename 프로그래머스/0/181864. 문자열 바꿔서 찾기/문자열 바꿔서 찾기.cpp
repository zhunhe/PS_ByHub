#include <string>
#include <vector>

using namespace std;

int solution(string s, string pat) {
    for (auto& c : pat)
        c = c == 'A' ? 'B' : 'A';
    return s.find(pat) != string::npos;
}