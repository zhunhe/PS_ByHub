#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    int ans = 0;
    for (auto num : d) {
        if (num > budget) break;
        budget -= num;
        ++ans;
    }
    return ans;
}