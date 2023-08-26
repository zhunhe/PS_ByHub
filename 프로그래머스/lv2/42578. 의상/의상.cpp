#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> hash;
    for (auto cloth : clothes) hash[cloth[1]]++;
    for (auto elem : hash) answer *= (elem.second + 1);
    return answer - 1;
}