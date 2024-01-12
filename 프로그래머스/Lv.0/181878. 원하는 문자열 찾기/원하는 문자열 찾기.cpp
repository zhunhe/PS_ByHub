#include <string>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    if (pat.size() > myString.size()) return 0;
    transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    transform(pat.begin(), pat.end(), pat.begin(), ::toupper);
    for (int i = 0; i < myString.size() - pat.size() + 1; i++)
        if (myString.substr(i, pat.size()) == pat)
            return 1;
    return 0;
}