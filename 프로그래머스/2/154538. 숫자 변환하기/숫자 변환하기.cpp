#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int n) {
    queue<pair<int, int>> q;
    q.push({y, 0});
    while (!q.empty()) {
        auto [now, count] = q.front(); q.pop();
        if (now < x) continue;
        if (now == x)
            return count;
        if (now % 3 == 0)
            q.push({now / 3, count + 1});
        if (!(now & 1))
            q.push({now >> 1, count + 1});
        q.push({now - n, count + 1});
    }
    return -1;
}