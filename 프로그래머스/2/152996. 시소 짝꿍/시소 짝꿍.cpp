#include <bits/stdc++.h>
using namespace std;

long long solution(vector<int> weights) {
    sort(weights.begin(), weights.end());
    long long ans = 0;
    for (int i = 0; i < weights.size(); i++) {
        for (int j = i + 1; j < weights.size(); j++) {
            if (weights[i] == weights[j]) ++ans;
            else if (weights[i] * 3 == weights[j] * 2) ++ans;
            else if (weights[i] * 2 == weights[j]) ++ans;
            else if (weights[i] * 4 == weights[j] * 3) ++ans;
        }
    }
    return ans;
}