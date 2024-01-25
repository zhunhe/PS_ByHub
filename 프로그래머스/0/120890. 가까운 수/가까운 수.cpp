#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> array, int n) {
    sort(array.begin(), array.end());
    int diff = 100, ans = 0;
    for (auto num : array)
        if (abs(n - num) < diff)
            ans = num, diff = abs(n - num);
    return ans;
}