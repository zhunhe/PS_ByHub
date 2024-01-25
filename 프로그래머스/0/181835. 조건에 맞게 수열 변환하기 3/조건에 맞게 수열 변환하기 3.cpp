#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    for (auto& num : arr)
        k & 1 ? num *= k : num += k;
    return arr;
}