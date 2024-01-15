#include <cmath>

long long solution(long long n) {
    long long x = sqrt(n);
    return pow(x, 2) == n ? pow(x + 1, 2) : -1;
}