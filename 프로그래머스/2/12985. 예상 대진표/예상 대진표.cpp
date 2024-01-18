#include <cmath>

int solution(int n, int a, int b) {
    int power = 2, ans = 1;
    while (power <= n) {
        if ((a + power - 1) / power == (b + power - 1) / power)
            return ans;
        power <<= 1;
        ++ans;
    }
}