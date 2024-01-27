#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int ans = 0;
    for (int i = 0; i < signs.size(); i++)
        ans += signs[i] ? absolutes[i] : -absolutes[i];
    return ans;
}