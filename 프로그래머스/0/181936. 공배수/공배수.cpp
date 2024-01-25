#include <bits/stdc++.h>
using namespace std;

int solution(int number, int n, int m) {
    return !(number % n) && !(number % m);
}