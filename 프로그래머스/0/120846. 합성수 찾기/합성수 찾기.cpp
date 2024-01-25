#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    vector<bool> composite(n + 1, false);
    for (int i = 2; i < n + 1; i++) {
        if (composite[i]) continue;
        for (int j = pow(i, 2); j < n + 1; j += i)
            composite[j] = true;
    }
    return count(composite.begin(), composite.end(), true);
}