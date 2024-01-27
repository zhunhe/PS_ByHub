#include <bits/stdc++.h>
using namespace std;

int solution(string A, string B) {
    if (A == B) return 0;
    for (int i = 0; i < B.size(); i++) {
        rotate(A.begin(), A.end() - 1, A.end());
        if (A == B)
            return i + 1;
    }
    return -1;
}