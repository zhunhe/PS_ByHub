#include <bits/stdc++.h>
using namespace std;

bool isThereThree(int num) {
    while (num > 0) {
        if (num % 10 == 3) return true;
        num /= 10;
    }
    return false;
}

int solution(int n) {
    int ans = 0;
    for (int i = 1; i < n + 1; i++) {
        ++ans;
        while (ans % 3 == 0 || isThereThree(ans))
            ++ans;
    }
    return ans;
}