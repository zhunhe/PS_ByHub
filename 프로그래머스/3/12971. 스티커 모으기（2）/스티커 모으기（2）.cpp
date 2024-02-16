#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> sticker) {
    vector<int> dp1(sticker.size()), dp2(sticker.size());
    dp1[0] = sticker[0];
    dp1[1] = sticker[1];
    dp1[2] = sticker[0] + sticker[2];
    for (int i = 3; i < sticker.size() - 1; i++)
        dp1[i] = max(dp1[i - 2], dp1[i - 3]) + sticker[i];
    dp2[1] = sticker[1];
    dp2[2] = sticker[2];
    for (int i = 3; i < sticker.size(); i++)
        dp2[i] = max(dp2[i - 2], dp2[i - 3]) + sticker[i];
    return max(*max_element(dp1.begin(), dp1.end()), *max_element(dp2.begin(), dp2.end()));
}