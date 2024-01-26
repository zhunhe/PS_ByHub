#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> array) {
    vector<int> cnt(1001);
    for (auto num : array) ++cnt[num];
    auto it = max_element(cnt.begin(), cnt.end());
    if (count(cnt.begin(), cnt.end(), *it) > 1)
        return -1;
    return it - cnt.begin();
}