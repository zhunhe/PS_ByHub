#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr) {
    for (int i = 0; ; i++) {
        bool changed = false;
        for (auto& num : arr) {
            if (num >= 50 && !(num & 1))
                num >>= 1, changed = true;
            else if (num < 50 && (num & 1))
                num = (num << 1) + 1, changed = true;
        }
        if (!changed)
            return i;
    }
}