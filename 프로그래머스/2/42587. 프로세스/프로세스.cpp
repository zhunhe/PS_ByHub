#include <bits/stdc++.h>
using namespace std;

int ans, idx, arr[10];

int solution(vector<int> priorities, int location) {
    const int len = priorities.size();
    for (auto elem : priorities) ++arr[elem];
    for (int num = 9; num >= 0; num--) {
        for (int i = 0; i < arr[num]; i++) {
            while (priorities[idx] != num) idx = (idx + 1) % len;
            priorities[idx] = 0;
            ++ans;
            if (idx == location) return ans;
        }
    }
    return ans;
}