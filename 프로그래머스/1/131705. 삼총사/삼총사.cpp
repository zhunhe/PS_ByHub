#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
        for (int j = i + 1; j < nums.size(); j++)
            for (int k = j + 1; k < nums.size(); k++)
                if (nums[i] + nums[j] + nums[k] == 0)
                    ++ans;
    return ans;
}