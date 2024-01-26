#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> v, vector<int> query) {
    for (int i = 0; i < query.size(); i++)
        v = (i & 1) ? vector<int>(v.begin() + query[i], v.end()) : vector<int>(v.begin(), v.begin() + query[i] + 1);
    return v;
}