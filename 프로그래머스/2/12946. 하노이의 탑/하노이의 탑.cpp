#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void hanoi(int n, int from, int stopover, int goal) {
    if (n == 1) {
        ans.push_back({from, goal});
        return;
    }
    hanoi(n - 1, from, goal, stopover);
    hanoi(1, from, stopover, goal);
    hanoi(n - 1, stopover, from, goal);
}

vector<vector<int>> solution(int n) {
    hanoi(n, 1, 2, 3);
    return ans;
}