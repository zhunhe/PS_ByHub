#include <bits/stdc++.h>
using namespace std;

int solution(int num, int k) {
    int pos = to_string(num).find(k + '0');
    return pos == string::npos ? -1 : pos + 1;
}