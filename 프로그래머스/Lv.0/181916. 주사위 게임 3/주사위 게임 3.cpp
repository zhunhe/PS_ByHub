#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int solution(int a, int b, int c, int d) {
    const int sum = a + b + c + d;
    if (a == b && b == c && c == d) return 1111 * a;
    if (b == c && c == d) return pow(10 * b + a, 2);
    if (a == c && c == d) return pow(10 * a + b, 2);
    if (a == b && b == d) return pow(10 * a + c, 2);
    if (a == b && b == c) return pow(10 * a + d, 2);
    if (a == b && c == d) return (a + c) * abs(a - c);
    if (a == c && b == d) return (a + b) * abs(a - b);
    if (a == d && b == c) return (a + b) * abs(a - b);
    if (a == b) return c * d;
    if (a == c) return b * d;
    if (a == d) return b * c;
    if (b == c) return a * d;
    if (b == d) return a * c;
    if (c == d) return a * b;
    return min({a, b, c, d});
}