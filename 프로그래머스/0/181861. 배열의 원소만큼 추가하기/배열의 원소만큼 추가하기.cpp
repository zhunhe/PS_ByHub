#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> ans;
    for (auto num : arr)
        for (int i = 0; i < num; i++)
            ans.push_back(num);
    return ans;
}