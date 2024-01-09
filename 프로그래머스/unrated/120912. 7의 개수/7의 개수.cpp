#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (int number: array)
        for (;number > 0; number /= 10)
            if (number % 10 == 7) answer++;
    return answer;
}