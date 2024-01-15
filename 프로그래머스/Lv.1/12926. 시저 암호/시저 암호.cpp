#include <string>

using namespace std;

string solution(string s, int n) {
    for (char& c : s) {
        if (isupper(c)) {
            c += n;
            if (!isupper(c))
                c -= 26;
        }
        if (islower(c)) {
            c += n;
            if (!islower(c))
                c -= 26;
        }
    }
    return s;
}