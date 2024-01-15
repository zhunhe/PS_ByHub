#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

vector<int> solution(int n, int m) {
    int gcdNumber = gcd(n, m);
    return {gcdNumber, n * m / gcdNumber};
}