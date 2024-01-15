#include <algorithm>

using namespace std;

long long solution(int price, int money, int count) {
    long long sum = 0;
    for (long long i = 1; i < count + 1; i++)
        sum += price * i;
    return max(0LL, sum - money);
}