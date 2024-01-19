#include <bits/stdc++.h>
using namespace std;

int ans, i, arr[10];

int solution(vector<int> v, int location) {
    const int len = v.size();
    for (auto elem : v) ++arr[elem];
    for (int num = 9; num > 0; num--) while (arr[num]--) {
        while (v[i] != num) i = (i + 1) % len;
        ++ans;
        if (i == location) return ans;
        i = (i + 1) % len;
    }
    return ans;
}