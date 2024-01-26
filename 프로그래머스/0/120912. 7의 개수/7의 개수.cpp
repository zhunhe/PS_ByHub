#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> array) {
    int ans = 0;
    for (auto num : array) {
        while (num > 0) {
            if (num % 10 == 7) ++ans;
            num /= 10;
        }
    }
    return ans;
}