#include <bits/stdc++.h>
using namespace std;

int counts[1002];

int solution(vector<int> array) {
    map<int, int> hash;
    for (int num : array) hash[num]++;
    int _max = 0, number = 0;
    for (const auto& [key, value] : hash) {
        if (value <= _max) continue;
        _max = value;
        number = key;
    }
    for (const auto& [key, value] : hash) {
        if (value == _max && key != number) return -1;
    }
    return number;
}