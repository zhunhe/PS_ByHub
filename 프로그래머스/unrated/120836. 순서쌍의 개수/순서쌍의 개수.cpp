#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i < n + 1; i++)
        if (n / i * i == n)
            answer++;
    return answer;
}