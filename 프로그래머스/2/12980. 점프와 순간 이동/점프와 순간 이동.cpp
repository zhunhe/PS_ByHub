#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    deque<pair<int, int>> dq;
    dq.push_back({n, 0});
    while (!dq.empty()) {
        int now = dq.front().first, move = dq.front().second; dq.pop_front();
        if (now == 0)
            return move;
        if (!(now & 1)) dq.push_front({now >> 1, move});
        else dq.push_back({now - 1, move + 1});
    }
}