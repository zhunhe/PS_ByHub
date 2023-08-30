#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
    int n; cin >> n;
    vector<int> stats(n);
    for (int& elem : stats) cin >> elem;
    int left = 0, right = n - 1, answer = 0;
    while (left < right) {
        answer = max(answer, min(stats[left], stats[right]) * (right - left - 1));
        if (stats[left] > stats[right])
            right--;
        else
            left++;
    }
    cout << answer << '\n';
}
