#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> array, int height) {
    sort(array.begin(), array.end());
    return array.end() - upper_bound(array.begin(), array.end(), height);
}