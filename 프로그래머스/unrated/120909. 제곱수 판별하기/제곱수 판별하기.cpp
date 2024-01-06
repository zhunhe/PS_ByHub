#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    const int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n ? 1 : 2;
}