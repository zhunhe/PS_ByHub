#include <bits/stdc++.h>
using namespace std;

#define CHAR_O  'O'
#define CHAR_X  'X'

int countWin(const vector<string>& b, char c) {
    int win = 0;
    if (b[0][0] == c && b[1][1] == c && b[2][2] == c) ++win;
    if (b[0][2] == c && b[1][1] == c && b[2][0] == c) ++win;
    for (int i = 0; i < 3; i++) {
        if (b[0][i] == c && b[1][i] == c && b[2][i] == c) ++win;
        if (b[i][0] == c && b[i][1] == c && b[i][2] == c) ++win;
    }
    return win;
}

int solution(vector<string> b) {
    int oCnt = 0, xCnt = 0;
    for (const auto& s : b) {
        for (const auto& c : s) {
            if (c == CHAR_O) ++oCnt;
            if (c == CHAR_X) ++xCnt;
        }
    }
    if (!oCnt && !xCnt) return 1;
    if (oCnt != xCnt && oCnt != xCnt + 1) return 0;
    int oWin = countWin(b, CHAR_O);
    int xWin = countWin(b, CHAR_X);
    if (oWin && xWin) return 0;
    if (oWin && oCnt == xCnt) return 0;
    if (xWin && oCnt > xCnt) return 0;
    return 1;
}