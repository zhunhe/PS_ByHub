#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());
    int left = 0, right = citations.size() - 1, answer = 0;
    while (left <= right) {
        const int mid = (left + right) / 2;
        if (citations[mid] >= citations.size() - mid) {
            answer = max(answer, int(citations.size() - mid));
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return answer;
}