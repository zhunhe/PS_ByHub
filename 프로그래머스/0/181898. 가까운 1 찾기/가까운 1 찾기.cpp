#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr, int idx) {
    auto it = find(arr.begin() + idx, arr.end(), 1);
    return it == arr.end() ? -1 : it - arr.begin();
}