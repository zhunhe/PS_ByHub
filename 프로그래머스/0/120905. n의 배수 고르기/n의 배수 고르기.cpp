#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> ans;
    for (auto num : numlist)
        if (!(num % n))
            ans.push_back(num);
    return ans;
}