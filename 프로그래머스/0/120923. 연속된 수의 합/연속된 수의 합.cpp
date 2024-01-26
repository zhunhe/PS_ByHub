#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int num, int total) {
    vector<int> ans;
    int s = total / num - (num - 1) / 2;
    while (num--) ans.push_back(s++);
    return ans;
}