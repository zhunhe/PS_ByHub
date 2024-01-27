#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> po1 = {1, 2, 3, 4, 5};
    vector<int> po2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> po3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int idx1 = 0, idx2 = 0, idx3 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (auto answer : answers) {
        if (po1[idx1] == answer) ++cnt1;
        if (po2[idx2] == answer) ++cnt2;
        if (po3[idx3] == answer) ++cnt3;
        idx1 = (idx1 + 1) % po1.size();
        idx2 = (idx2 + 1) % po2.size();
        idx3 = (idx3 + 1) % po3.size();
    }
    if (cnt1 == cnt2 && cnt2 == cnt3) return {1, 2, 3};
    if (cnt1 == cnt2 && cnt2 > cnt3) return {1, 2};
    if (cnt1 == cnt3 && cnt3 > cnt2) return {1, 3};
    if (cnt2 == cnt3 && cnt3 > cnt1) return {2, 3};
    if (cnt1 > cnt2 && cnt1 > cnt3) return {1};
    if (cnt2 > cnt1 && cnt2 > cnt3) return {2};
    if (cnt3 > cnt1 && cnt3 > cnt2) return {3};
}