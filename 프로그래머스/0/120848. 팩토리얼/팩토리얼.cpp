#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int solution(int n) {
    for (int i = 2; i < 12; i++)
        if (n < factorial(i))
            return i - 1;
}