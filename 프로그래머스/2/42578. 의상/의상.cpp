#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> m;
    for (auto v : clothes) ++m[v[1]];
    int ans = 1;
    for (auto [key, value] : m) ans *= (value + 1);
    return ans - 1;
}