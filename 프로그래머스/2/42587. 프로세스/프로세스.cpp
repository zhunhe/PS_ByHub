#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> v, int location) {
    int now = 0;
    for (int i = 0; i < v.size(); i++) {
        int _max = *max_element(v.begin(), v.end());
        while (v[now] < _max) now = (now + 1) % v.size();
        if (now == location) return i + 1;
        v[now] = 0;
        while (v[now] == 0) now = (now + 1) % v.size();
    }
    return v.size();
}