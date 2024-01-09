#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0, factorial = 1;
    while (factorial * answer < n) {
        answer++;
        factorial *= answer;
    }
    return answer;
}