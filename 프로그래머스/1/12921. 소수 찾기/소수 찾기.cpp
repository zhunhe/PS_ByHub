#include <string>
#include <vector>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int solution(int n) {
    vector<bool> isPrimes(1000001, true);
    isPrimes[0] = isPrimes[1] = false;
    for (long long i = 2; i < n + 1; i++) {
        if (!isPrimes[i]) continue;
        isPrimes[i] = isPrime(i);
        for (long long j = i * i; j < n + 1; j += i) {
            isPrimes[j] = false;
        }
    }
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
        ans += isPrimes[i];
    return ans;
}