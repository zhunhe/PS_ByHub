#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v, int k) {
    return v[(k - 1) * 2 % v.size()];
}