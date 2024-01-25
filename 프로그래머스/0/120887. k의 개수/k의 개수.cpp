#include <bits/stdc++.h>
using namespace std;

int solution(int i, int j, int k) {
    int ans = 0;
    for (int a = i; a < j + 1; a++) {
        string s = to_string(a);
        ans += count(s.begin(), s.end(), k + '0');
    }
    return ans;
}