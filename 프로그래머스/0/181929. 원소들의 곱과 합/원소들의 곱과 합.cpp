#include <bits/stdc++.h>
using namespace std;

#define all(x)  x.begin(), x.end()
#define SUM(x)  accumulate(all(x), 0)
#define MUL(x)  accumulate(all(x), 1, multiplies<int>())

int solution(vector<int> v) {
    return MUL(v) < pow(SUM(v), 2);
}