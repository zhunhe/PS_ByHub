#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v) {
    if (v[1] - v[0] == v[v.size() - 1] - v[v.size() - 2])
        return v.back() + v[1] - v[0];
    return v.back() * v[1] / v[0];
}