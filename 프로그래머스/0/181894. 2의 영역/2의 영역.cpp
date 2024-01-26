#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    auto s = find(arr.begin(), arr.end(), 2) - arr.begin();
    auto e = arr.rend() - find(arr.rbegin(), arr.rend(), 2);
    if (e == 0) return {-1};
    return {arr.begin() + s, arr.begin() + e};
}