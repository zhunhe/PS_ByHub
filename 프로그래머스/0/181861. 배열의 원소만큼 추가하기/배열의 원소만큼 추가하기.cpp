#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> ans;
    for (auto num : arr)
        ans.insert(ans.end(), num, num);
    return ans;
}