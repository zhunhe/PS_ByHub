#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> v) {
    for (int i = 0; i < v.size(); i++)
        transform(v[i].begin(), v[i].end(), v[i].begin(), (i & 1) ? ::toupper : ::tolower);
    return v;
}