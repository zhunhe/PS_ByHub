#include <bits/stdc++.h>
using namespace std;

int solution(int storey) {
    int ans = 0;
    while (storey > 10) {
        int digit = storey % 10;
        if (digit > 5) {
            ans += (10 - digit);
            storey += 10;
        } else if (digit == 5 && storey / 10 % 10 >= 5) {
            ans += 5;
            storey += 10;
        } else {
            ans += digit;
        }
        storey /= 10;
    }
    return ans + min(10 - storey + 1, storey);
}