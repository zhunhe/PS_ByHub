#include <cmath>

int solution(int n, int a, int b) {
    int ans = 0;
    while (a != b) {
        a = (a + 1) >> 1;
        b = (b + 1) >> 1;
        ++ans;
    }
    return ans;
}