#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> common) {
    const int last = common.size() - 1;
    if ((common[1] - common[0]) == (common[2] - common[1]))
        return common[last] + common[last] - common[last - 1];
    return common[last] * common[last] / common[last - 1];
}