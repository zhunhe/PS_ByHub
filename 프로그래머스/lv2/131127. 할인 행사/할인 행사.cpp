#include <bits/stdc++.h>
using namespace std;
#define LEN 10

bool isAvailable(vector<string> want, vector<int> number, map<string, int> hash) {
    for (int i = 0; i < want.size(); i++)
        if (hash[want[i]] < number[i])
            return false;
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> hash;
    for (int i = 0; i < LEN; i++) hash[discount[i]]++;
    if (isAvailable(want, number, hash)) answer++;
    for (int i = 1; i < discount.size() - LEN + 1; i++) {
        hash[discount[i - 1]]--;
        hash[discount[i + LEN - 1]]++;
        if (isAvailable(want, number, hash))
            answer++;
    }
    return answer;
}