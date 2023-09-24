/*
 * N-Queen
 * https://www.acmicpc.net/problem/9663
 */

#include <iostream>
#include <cstdlib>
using namespace std;
int N, CNT;
int BOARD[15];

bool isValid(int idx) {
    for (int i = 0; i < idx; i++) {
        if (BOARD[idx] == BOARD[i] || idx - i == abs(BOARD[idx] - BOARD[i])) {
            return false;
        }
    }
    return true;
}

void nqueen(int L) {
    if (L == N) {
        CNT++;
        return;
    }
    for (int i = 0; i < N; i++) {
        BOARD[L] = i;
        if (isValid(L)) {
            nqueen(L + 1);
        }
    }
}

int main() {
    cin >> N;
    nqueen(0);
    cout << CNT;
}