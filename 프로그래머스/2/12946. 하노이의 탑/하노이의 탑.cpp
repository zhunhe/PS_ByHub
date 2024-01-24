#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void hanoi(int n, int from, int stopover, int to) {
    if (n == 1)
        ans.push_back({from, to});
    else {
        hanoi(n - 1, from, to, stopover);
        hanoi(1, from, stopover, to);
        hanoi(n - 1, stopover, from, to);
    }
}

vector<vector<int>> solution(int n) {
    hanoi(n, 1, 2, 3);
    return ans;
}