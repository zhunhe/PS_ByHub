#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> ans;
    for (int i = start_num; i < end_num + 1; i++)
        ans.push_back(i);
    return ans;
}