#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define NOT_VISIT -1

int main() {
    FASTIO
    int n; cin >> n;
    vector<int> solutions(n);
    for (int& elem : solutions) cin >> elem;
    sort(solutions.begin(), solutions.end());
    int left = 0, right = n - 1, ans_left = left, ans_right = right;
    while (left < right) {
        if (abs(solutions[left] + solutions[right]) < abs(solutions[ans_left] + solutions[ans_right]))
            ans_left = left, ans_right = right;
        if (solutions[left] + solutions[right] > 0)
            right--;
        else
            left++;
    }
    cout << solutions[ans_left] << ' ' << solutions[ans_right] << '\n';
}
