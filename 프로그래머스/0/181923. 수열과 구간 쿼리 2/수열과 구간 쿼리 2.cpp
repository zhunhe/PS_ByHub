#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> ans;
    for (const auto& q : queries) {
        int num = 987654321;
        for (int i = q[0]; i < q[1] + 1; i++)
            if (arr[i] > q[2])
                num = min(num, arr[i]);
        if (num == 987654321)
            ans.push_back(-1);
        else
            ans.push_back(num);
    }
    return ans;
}