#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    const int len1 = arr1.size(), len2 = arr2.size();
    if (len1 != len2)
        return len1 > len2 ? 1 : -1;
    const int sum1 = accumulate(arr1.begin(), arr1.end(), 0);
    const int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
    return sum1 == sum2 ? 0 : sum1 > sum2 ? 1 : -1;
}