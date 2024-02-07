#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    deque<long> dq1(queue1.begin(), queue1.end());
    deque<long> dq2(queue2.begin(), queue2.end());
    long sum1 = reduce(dq1.begin(), dq1.end());
    long sum2 = reduce(dq2.begin(), dq2.end());
    const int len = dq1.size() + dq2.size();
    int ans = 0;
    while (sum1 != sum2 && ans < len * 4) {
        if (sum1 > sum2) {
            const int num = dq1.front(); dq1.pop_front();
            sum1 -= num;
            sum2 += num;
            dq2.push_back(num);
        } else {
            const int num = dq2.front(); dq2.pop_front();
            sum2 -= num;
            sum1 += num;
            dq1.push_back(num);
        }
        ++ans;
    }
    return ans == len * 4 ? -1 : ans;
}