#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> ans;
    for (int num : arr)
        if (ans.empty() || ans.back() != num)
            ans.push_back(num);
    return ans;
}