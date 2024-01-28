#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> has(n + 2, 1); has[0] = 0, has[n + 1] = 0;
    for (int elem : lost) --has[elem];
    for (int elem : reserve) ++has[elem];
    for (int i = 1; i <= n; i++) {
        if (has[i]) continue;
        if (has[i - 1] > 1)
            ++has[i], --has[i - 1];
        else if (has[i + 1] > 1)
            ++has[i], --has[i + 1];
    }
    return count_if(has.begin() + 1, has.end(), [](auto elem) { return elem >= 1; });
}