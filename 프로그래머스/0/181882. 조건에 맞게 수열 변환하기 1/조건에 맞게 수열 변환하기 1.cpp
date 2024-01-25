#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    for (auto& num : arr) {
        if (num >= 50 && !(num & 1))
            num >>= 1;
        else if (num < 50 && (num & 1))
            num <<= 1;
    }
    return arr;
}