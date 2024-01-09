#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer, small, big;
    for (int num: numlist) {
        if (num == n) answer.push_back(num);
        else if (num < n) small.push_back(num);
        else if (num > n) big.push_back(num);
    }
    sort(small.begin(), small.end());
    sort(big.begin(), big.end());
    int smallIndex = small.size() - 1, bigIndex = 0;
    while (smallIndex >= 0 && bigIndex < big.size()) {
        if (n - small[smallIndex] < big[bigIndex] - n)
            answer.push_back(small[smallIndex--]);
        else
            answer.push_back(big[bigIndex++]);
    }
    while (smallIndex >= 0)
        answer.push_back(small[smallIndex--]);
    while (bigIndex < big.size())
        answer.push_back(big[bigIndex++]);
    return answer;
}