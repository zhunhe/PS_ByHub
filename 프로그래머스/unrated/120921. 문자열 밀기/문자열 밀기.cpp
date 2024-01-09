#include <bits/stdc++.h>
using namespace std;

int solution(string A, string B) {
    int len = A.size(), answer = 0;
    while (len--) {
        if (A == B) return answer;
        rotate(B.begin(), B.begin() + 1, B.end());
        answer++;
    }
    return -1;
}