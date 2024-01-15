#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = n;
    for (int i = 2; i < n; i++)
        if (n % i == 1)
            answer = min(answer, i);
    return answer;
}