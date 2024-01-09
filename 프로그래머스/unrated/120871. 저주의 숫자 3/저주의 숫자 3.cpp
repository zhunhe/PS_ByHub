#include <bits/stdc++.h>
using namespace std;

bool hasThree(int number) {
    while (number > 0) {
        if (number % 10 == 3)
            return true;
        number /= 10;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    while (n--) {
        answer++;
        while (answer % 3 == 0 || hasThree(answer))
            answer++;
    }
    return answer;
}