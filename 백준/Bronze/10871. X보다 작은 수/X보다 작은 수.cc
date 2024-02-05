#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> nums(n);
    for (auto& elem : nums) cin >> elem;
    for (const auto num : nums) if (num < x) cout << num << ' ';
}