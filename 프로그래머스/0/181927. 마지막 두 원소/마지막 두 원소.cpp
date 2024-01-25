#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> v) {
    int last = v.size() - 1;
    if (v[last] > v[last - 1])
        v.push_back(v[last] - v[last - 1]);
    else
        v.push_back(v[last] * 2);
    return v;
}