#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        if (v.size() - i <= v[i])
            return v.size() - i;
    return 0;
}