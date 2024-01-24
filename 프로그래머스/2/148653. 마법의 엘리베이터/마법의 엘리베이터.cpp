#include <bits/stdc++.h>
using namespace std;

int solution(int storey) {
    int ans = 0;
    while (storey > 10) {
        int digit = storey % 10;
        storey /= 10;
        if (digit > 5 || (digit == 5 && storey % 10 >= 5)) {
            ans += (10 - digit);
            ++storey;
        } else
            ans += digit;
    }
    return ans + min(10 - storey + 1, storey);
}