#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    int len = 1;
    while (len < arr.size()) len <<= 1;
    while (arr.size() < len) arr.push_back(0);
    return arr;
}