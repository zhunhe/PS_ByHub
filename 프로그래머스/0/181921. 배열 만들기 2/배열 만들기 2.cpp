#include <bits/stdc++.h>
using namespace std;

bool isValid(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 5)
            return false;
        num /= 10;
    }
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> ans;
    for (int i = l; i < r + 1; i++) {
        if (isValid(i))
            ans.push_back(i);
    }
    return ans.empty() ? vector<int>(1, -1) : ans;
}