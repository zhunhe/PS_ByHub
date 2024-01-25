#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers, int n) {
    int ans = 0;
    for (auto num : numbers) {
        ans += num;
        if (ans > n) break;
    }
    return ans;
}