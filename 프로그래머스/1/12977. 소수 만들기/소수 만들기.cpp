#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (!(n & 1)) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (!(n % i))
            return false;
    return true;
}

int solution(vector<int> nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
        for (int j = i + 1; j < nums.size(); j++)
            for (int k = j + 1; k < nums.size(); k++)
                if (isPrime(nums[i] + nums[j] + nums[k]))
                    ++ans;
    return ans;
}