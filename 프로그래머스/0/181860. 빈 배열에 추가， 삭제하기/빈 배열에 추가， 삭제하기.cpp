#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> ans;
    for (int i = 0; i < flag.size(); i++) {
        if (flag[i])
            for (int j = 0; j < arr[i] << 1; j++)
                ans.push_back(arr[i]);
        else
            for (int j = 0; j < arr[i]; j++)
                ans.pop_back();
    }
    return ans;
}