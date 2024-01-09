#include <vector>
#include <cstdlib>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 987654321;
    for (const int number: array)
        if (abs(number - n) == abs(answer - n))
            answer = min(answer, number);
        else if (abs(number - n) < abs(answer - n))
            answer = number;
    return answer;
}