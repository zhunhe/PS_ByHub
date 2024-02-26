#include <bits/stdc++.h>
using namespace std;

const int cnt[26] = {
    0, 1, 2, 3, 4,
    5, 6, 7, 8, 9,
    10, 11, 12, 13, 12,
    11, 10, 9, 8, 7,
    6, 5, 4, 3, 2,
    1
};

int solution(string name) {
    const int len = name.size();
    int ans = 0, move = len - 1;

    for (int i = 0; i < len; i++) {
        ans += cnt[name[i] - 'A'];
        int j = i + 1;
        while (j < len && name[j] == 'A')
            ++j;
        move = min(move, i + len - j + min(i, len - j));
    }
    return ans + move;
}