#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int s, int e) {
    vector<int> ans(s - e + 1);
    iota(ans.begin(), ans.end(), e);
    return {ans.rbegin(), ans.rend()};
}