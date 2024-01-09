#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> common) {
    bool diff = (common[1] - common[0]) == (common[2] - common[1]);
    const int last = common.size() - 1;
    if (diff)
        return common[last] + common[last] - common[last - 1];
    return common[last] * common[last] / common[last - 1];
}