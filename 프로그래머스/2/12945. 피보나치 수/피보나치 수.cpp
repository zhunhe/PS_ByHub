#include <string>
#include <vector>

using namespace std;

vector<int> cache(100002, -1);

int fibo(int n) {
    if (n < 3) return 1;
    if (cache[n] != -1) return cache[n];
    return cache[n] = (fibo(n - 2) + fibo(n - 1)) % 1234567;
}

int solution(int n) {
    return fibo(n);
}