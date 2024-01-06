#include <string>
#include <vector>

using namespace std;

#define LAMB_SKEWERS_PRICE    12000
#define DRINK_PRICE           2000

int solution(int n, int k) {
    k = max(0, k - n / 10);
    return n * LAMB_SKEWERS_PRICE + k * DRINK_PRICE;
}