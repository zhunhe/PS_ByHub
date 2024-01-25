#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v1, vector<int> v2) {
    return v1[0] * 365 + v1[1] * 30 + v1[2] < v2[0] * 365 + v2[1] * 30 + v2[2];
}