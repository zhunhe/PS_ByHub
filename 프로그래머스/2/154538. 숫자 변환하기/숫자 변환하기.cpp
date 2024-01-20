#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int n) {
    queue<pair<int, int>> q;
    q.push({y, 0});
    while (!q.empty()) {
        auto [now, count] = q.front(); q.pop();
        if (now == x)
            return count;
        if (now % 3 == 0 && now / 3 >= x)
            q.push({now / 3, count + 1});
        if (!(now & 1) && now >> 1 >= x)
            q.push({now >> 1, count + 1});
        if (now - n >= x)
            q.push({now - n, count + 1});
    }
    return -1;
}