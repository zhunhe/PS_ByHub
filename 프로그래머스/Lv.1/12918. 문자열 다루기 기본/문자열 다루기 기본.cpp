#include <string>

using namespace std;

bool solution(string s) {
    const int len = s.size();
    if (len != 4 && len != 6) return false;
    for (char c : s)
        if (!isdigit(c))
            return false;
    return true;
}