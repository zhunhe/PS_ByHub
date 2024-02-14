#include <bits/stdc++.h>
using namespace std;

long long solution(int w, int h) {
    return (long long)w * h - (w + h - gcd(w, h));
}