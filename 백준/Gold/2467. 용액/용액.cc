#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    FASTIO
    int n; cin >> n;
    vector<int> solutions(n);
    for (int& elem : solutions) cin >> elem;
    sort(solutions.begin(), solutions.end());
    int left = 0, right = n - 1;
    int answer1 = solutions[left];
    int answer2 = solutions[right];
    while (left < right) {
        const int sum = solutions[left] + solutions[right];
        if (abs(sum) < abs(answer1 + answer2)) {
            answer1 = solutions[left];
            answer2 = solutions[right];
        }
        if (sum < 0) left++;
        else right--;
    }
    cout << answer1 << ' ' << answer2 << '\n';
}