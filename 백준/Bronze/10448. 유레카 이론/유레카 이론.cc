#include <bits/stdc++.h>
using namespace std;

vector<int> sums;

int solve() {
    int num; cin >> num;
    for (int i = 0; i < sums.size(); i++)
        for (int j = 0; j < sums.size(); j++)
            for (int k = 0; k < sums.size(); k++)
                if (sums[i] + sums[j] + sums[k] == num)
                    return 1;
    return 0;
}

int main() {
    for (int i = 1; i < 45; i++) sums.push_back(i * (i + 1) / 2);
    int t; cin >> t;
    while (t--)
        cout << solve() << '\n';
}