#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    for (int i = 1; i < n + 1; i++) {
        cout << string(i, '*');
        cout << '\n';
    }
    return 0;
}