#include <string>

using namespace std;

bool solution(string s) {
    int pCnt = 0, yCnt = 0;
    for (const char& c : s) {
        if (c == 'p' || c == 'P') ++pCnt;
        if (c == 'y' || c == 'Y') ++yCnt;
    }
    return pCnt == yCnt;
}