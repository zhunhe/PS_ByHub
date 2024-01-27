#include <bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count) {
    return max((long long)price * count * (count + 1) / 2 - money, 0LL);
}