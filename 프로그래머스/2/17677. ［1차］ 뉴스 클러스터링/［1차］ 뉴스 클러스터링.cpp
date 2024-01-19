#include <bits/stdc++.h>
using namespace std;

int a, b, arr1[676], arr2[676];
int solution(string s1, string s2) {
    for (int i = 1; i < s1.size(); i++)
        if (isalpha(s1[i - 1]) && isalpha(s1[i]))
            ++arr1[(s1[i - 1] & 31) * 26 + (s1[i] & 31)];
    for (int i = 1; i < s2.size(); i++)
        if (isalpha(s2[i - 1]) && isalpha(s2[i]))
            ++arr2[(s2[i - 1] & 31) * 26 + (s2[i] & 31)];
    for (int i = 0; i < 676; i++) a += min(arr1[i], arr2[i]), b += max(arr1[i], arr2[i]);
    return b ? a * 65536 / b : 65536;
}