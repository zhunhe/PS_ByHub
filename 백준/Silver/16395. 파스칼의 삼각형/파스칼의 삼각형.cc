#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int pascal[32][32];

int main() {
    FASTIO
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) pascal[i][0] = pascal[i][i] = 1;
    for (int y = 2; y < n; y++)
        for (int x = 1; x < y; x++)
            pascal[y][x] = pascal[y - 1][x - 1] + pascal[y - 1][x];
    cout << pascal[n - 1][k - 1];
}