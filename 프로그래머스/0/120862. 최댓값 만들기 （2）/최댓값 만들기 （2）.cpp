#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v) {
    sort(v.begin(), v.end());
    return max({v[0] * v[1], v[v.size() - 2] * v[v.size() - 1], v[0] * v[v.size() - 1]});
}