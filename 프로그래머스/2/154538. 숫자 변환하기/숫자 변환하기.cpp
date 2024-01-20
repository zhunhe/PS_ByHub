#include <bits/stdc++.h>
using namespace std;

bool visited[1000001];

int solution(int x, int y, int n) {
    queue<int> q;
    visited[x] = true;
    q.push(x);
    int ans = 0;
    while (!q.empty()) {
        const int len = q.size();
        for (int i = 0; i < len; i++) {
            const int now = q.front(); q.pop();
            if (now == y) return ans;
            for (int next : {now + n, now * 2, now * 3}) {
                if (next > y || visited[next]) continue;
                visited[next] = true;
                q.push(next);
            }
        }      
        ++ans;
    }
    return -1;
}