#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for (int number : numbers) {
        answer += number;
        if (answer > n) break;
    }
    return answer;
}