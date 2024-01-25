#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    cout << n << " is " << (n & 1 ? "odd" : "even") << '\n';
    return 0;
}