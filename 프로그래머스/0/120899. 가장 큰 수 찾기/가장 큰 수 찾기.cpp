#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array) {
    auto it = max_element(array.begin(), array.end());
    return {*it, static_cast<int>(it - array.begin())};
}