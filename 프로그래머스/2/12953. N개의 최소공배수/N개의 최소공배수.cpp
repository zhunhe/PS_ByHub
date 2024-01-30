#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v) {
    return accumulate(v.begin(), v.end(), 1, [](auto lcm, auto num) { return lcm / gcd(lcm, num) * num;});
}