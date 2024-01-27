#include <bits/stdc++.h>
using namespace std;

double solution(vector<int> v) {
    return (double)accumulate(v.begin(), v.end(), 0) / v.size();
}