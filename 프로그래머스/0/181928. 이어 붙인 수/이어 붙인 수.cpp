#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v) {
    int odd = 0, even = 0;
    for (auto num : v)
        num & 1 ? odd = odd * 10 + num : even = even * 10 + num;
    return odd + even;
}