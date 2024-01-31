#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int n) {
    queue<pair<int, int>> q;
    q.push({y, 0});
    while (!q.empty()) {
        const auto [now, cnt] = q.front(); q.pop();
        if (now == x)
            return cnt;
        if (now % 3 == 0)
            q.push({now / 3, cnt + 1});
        if (!(now & 1))
            q.push({now >> 1, cnt + 1});
        if (now - n >= x)
            q.push({now - n, cnt + 1});
    }
    return -1;
}