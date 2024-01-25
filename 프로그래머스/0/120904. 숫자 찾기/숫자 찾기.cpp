#include <bits/stdc++.h>
using namespace std;

int solution(int num, int k) {
    int idx = to_string(num).find(k + '0');
    return idx == -1 ? -1 : idx + 1;
}