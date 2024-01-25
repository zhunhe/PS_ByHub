#include <bits/stdc++.h>
#include <vector>

using namespace std;

int solution(int n) {
    int ans = 0;
    if (n & 1)
        for (int i = 1; i < n + 1; i += 2)
            ans += i;
    else
        for (int i = 2; i < n + 1; i += 2)
            ans += pow(i, 2);
    return ans;
}