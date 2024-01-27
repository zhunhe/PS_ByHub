#include <bits/stdc++.h>
using namespace std;

int cal(int num) {
    int cnt = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i) continue;
        cnt += 2;
        if (i * i == num) --cnt;
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int ans = 0;
    for (int i = 1; i < number + 1; i++) ans += cal(i) > limit ? power : cal(i);
    return ans;
}