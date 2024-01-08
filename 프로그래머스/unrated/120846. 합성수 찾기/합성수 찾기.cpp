#include <iostream>

using namespace std;

bool notPrime[101];

int solution(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (notPrime[i]) continue;
        for (int j = i * i; j <= n; j += i)
            notPrime[j] = true;
    }

    int count = 0;
    for (int i = 1; i < n + 1; i++)
        if (notPrime[i])
            count++;
    return count;
}