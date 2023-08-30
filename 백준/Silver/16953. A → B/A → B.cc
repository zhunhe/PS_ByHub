#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define NOT_VISIT -1

int main() {
    FASTIO
    int a, b; cin >> a >> b;
    queue<pair<int, int>> q;

    q.push({b, 1});

    while (!q.empty()) {
        const int now = q.front().first;
        const int count = q.front().second;
        q.pop();
        if (now == a) {
            cout << count << '\n';
            return 0;
        }
        if (now > 0 && now % 10 == 1)
            q.push({now / 10, count + 1});
        if (now > 0 && now % 2 == 0)
            q.push({now / 2, count + 1});
    }
    cout << -1 << '\n';
}
