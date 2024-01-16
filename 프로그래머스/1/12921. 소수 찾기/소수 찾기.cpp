#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<bool> isPrimes(1000001, true);
    for (long long i = 2; i < n + 1; i++) {
        if (!isPrimes[i]) continue;
        for (long long j = i * i; j < n + 1; j += i)
            isPrimes[j] = false;
    }
    int ans = 0;
    for (int i = 2; i < n + 1; i++)
        ans += isPrimes[i];
    return ans;
}