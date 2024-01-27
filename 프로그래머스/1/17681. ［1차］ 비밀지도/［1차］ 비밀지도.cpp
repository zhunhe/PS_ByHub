#include <bits/stdc++.h>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> ans(n);
    for (int i = 0; i < n; i++) {
        int num = arr1[i] | arr2[i]; string s = "";
        while (num > 0) s = (num & 1 ? "#" : " ") + s, num >>= 1;
        while (s.size() < n) s = " " + s;
        ans[i] = s;
    }
    return ans;
}