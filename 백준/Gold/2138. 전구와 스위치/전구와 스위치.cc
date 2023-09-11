#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define INF 987654321

void flip(string& s, int idx) {
    for (int i = idx - 1; i <= idx + 1; i++)
        if (i >= 0 && i < s.size())
            s[i] = (s[i] == '0' ? '1' : '0');
}

int solve(string from, const string& to, bool flipFirst) {
    int cnt = 0;
    if (flipFirst)
        flip(from, 0), cnt++;
    for (int i = 1; i < from.size(); i++)
        if (from[i - 1] != to[i - 1])
            flip(from, i), cnt++;
    if (from != to)
        return INF;
    return cnt;
}

int main() {
    FASTIO
    int n; cin >> n;
    string from, to;
    cin >> from >> to;
    int answer = min(solve(from, to, true), solve(from, to, false));
    cout << (answer == INF ? -1 : answer) << '\n';
}