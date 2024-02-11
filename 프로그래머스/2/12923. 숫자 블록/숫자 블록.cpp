#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000000;

vector<int> solution(long long begin, long long end) {
    vector<int> ans(end - begin + 1, 1);
    for (int i = 0; i < ans.size(); i++) {
        long long num = i + begin;
        long long _max = 1;
        for (long long j = 2; j * j <= num; j++) {
            if (num % j) continue;
            _max = max(_max, j);
            long long divisor2 = num / j;
            if (divisor2 <= MAX) {
                _max = max(_max, divisor2);
                break;
            }
        }
        ans[i] = _max;
    }
    if (begin == 1) ans[0] = 0;
    return ans;
}