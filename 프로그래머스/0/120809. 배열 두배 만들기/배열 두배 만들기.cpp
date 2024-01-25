#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
    for (auto& number : numbers) number <<= 1;
    return numbers;
}