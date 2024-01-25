#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> v, string direction) {
    if (direction == "right")
        rotate(v.begin(), v.end() - 1, v.end());
    else
        rotate(v.begin(), v.begin() + 1, v.end());
        
    return v;
}