#include <bits/stdc++.h>
using namespace std;

bool visited[1000001];

int solution(int x, int y, int n) {
    queue<pair<int, int>> q;
    visited[x] = true;
    q.push({x, 0});
    while (!q.empty()) {
        const auto now = q.front(); q.pop();
        if (now.first == y)
            return now.second;
        for (int next : {now.first + n, now.first * 2, now.first * 3}) {
            if (next > y || visited[next]) continue;
            visited[next] = true;
            q.push({next, now.second + 1});
        }
    }
    return -1;
}