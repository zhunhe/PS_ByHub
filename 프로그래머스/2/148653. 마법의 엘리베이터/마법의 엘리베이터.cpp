#include <bits/stdc++.h>
using namespace std;

int solution(int storey) {
    int ans = 0;
    while (storey > 0) {
        const int units = storey % 10;
        if (units == 5) {
            ans += 5;
            const int tens = storey / 10 % 10;
            if (tens >= 5)
                storey += 5;
        } else if (units > 5) {
            ans += 10 - units;
            storey += 10 - units;
        }
        else
            ans += units;
        storey /= 10;
    }
    return ans;
}