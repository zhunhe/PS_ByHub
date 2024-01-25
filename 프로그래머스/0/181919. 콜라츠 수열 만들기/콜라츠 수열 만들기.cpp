#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n) {
    vector<int> ans;
    while (n > 1) {
        ans.push_back(n);
        n = !(n & 1) ? n >>= 1 : n * 3 + 1;
    }
    ans.push_back(1);
    return ans;
}