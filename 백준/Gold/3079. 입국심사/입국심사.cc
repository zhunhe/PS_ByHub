#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    FASTIO
    int n, m; cin >> n >> m;
    vector<uint64_t> time(n);
    for (uint64_t& elem : time) cin >> elem;
    uint64_t left = 1, right = *max_element(time.begin(), time.end()) * m, answer = 0;
    while (left <= right) {
        const uint64_t mid = (left + right) / 2;
        uint64_t count = 0;
        for (uint64_t elem : time) {
            count += mid / elem;
        }
        if (count >= m) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << answer << '\n';
}