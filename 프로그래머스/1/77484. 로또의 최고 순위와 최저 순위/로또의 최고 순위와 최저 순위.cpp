#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    const int zero = count(lottos.begin(), lottos.end(), 0);
    int same = 0;
    for (auto lotto : lottos)
        if (find(win_nums.begin(), win_nums.end(), lotto) != win_nums.end())
            ++same;
    return {min(6, 7 - same - zero), min(6, 7 - same)};
}