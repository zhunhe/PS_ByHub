#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> w, vector<int> n, vector<string> d) {
    unordered_map<string, int> hash;
    for (int i = 0; i < w.size(); i++) hash[w[i]] = n[i];
    for (int i = 0; i < 9; i++) if ((--hash[d[i]]) == 0) hash.erase(d[i]);
    int ans = 0;
    for (int i = 9; i < d.size(); i++) {
        if ((--hash[d[i]]) == 0) hash.erase(d[i]);
        if (hash.empty()) ++ans;
        if ((++hash[d[i - 9]]) == 0) hash.erase(d[i - 9]);
    }
    return ans;
}