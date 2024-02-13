#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, ans = 0;
    cin >> n >> k;
    vector<long long> a(n);
    map<long long, int> m;
    for (auto &i : a) {
        string s; cin >> s;
        i = s.length();
   }
    int l = 0;
    for (int i = 0; i < n; i++) {
        ans += m[a[i]];
        m[a[i]]++;
        if (i >= k) m[a[l++]]--;
    }
    cout << ans;
}