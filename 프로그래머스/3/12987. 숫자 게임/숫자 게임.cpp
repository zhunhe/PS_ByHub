#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    for (int idx = 0, i = 0; i < A.size(); i++) {
        if (A[i] >= B[idx]) {
            A[i] = 0;
        } else
            ++idx;
    }
    return A.size() - count(A.begin(), A.end(), 0);
}