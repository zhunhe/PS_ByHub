#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int weights[26];

int main() {
    FASTIO
    int n; cin >> n;
    vector<string> strs(n);
    for (string& elem : strs) cin >> elem;
    for (const string& str : strs)
        for (int i = 0; i < str.size(); i++)
            weights[str[i] - 'A'] += pow(10, str.size() - i);
    vector<pair<int, char>> v;
    for (int i = 0; i < 26; i++)
        if (weights[i])
            v.push_back({weights[i], i + 'A'});
    sort(v.rbegin(), v.rend());
    map<char, int> dict;
    for (int i = 0; i < v.size(); i++)
        dict[v[i].second] = 9 - i;
    int64_t sum = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = strs[i].size() - 1; j >= 0; j--) {
            sum += dict[strs[i][j]] * cnt;
            cnt *= 10;
        }
    }
    cout << sum << '\n';
}