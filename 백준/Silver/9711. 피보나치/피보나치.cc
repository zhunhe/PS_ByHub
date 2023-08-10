#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
    int T; cin >> T;
    for (int i = 1; i < T + 1; i++) {
        int P, Q; cin >> P >> Q;
        vector<uint64_t> fibo(P + 1);
        fibo[1] = fibo[2] = 1;
        for (int j = 3; j < P + 1; j++)
            fibo[j] = (fibo[j - 1] + fibo[j - 2]) % Q;
        cout << "Case #" << i << ": " << fibo[P] % Q << '\n';
    }
}