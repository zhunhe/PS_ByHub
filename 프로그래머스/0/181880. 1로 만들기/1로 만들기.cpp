#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> num_list) {
    int ans = 0;
    for (auto num : num_list) {
        while (num > 1)
            num >>= 1, ++ans;
    }
    return ans;
}