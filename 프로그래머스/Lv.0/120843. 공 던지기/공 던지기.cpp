#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0, len = numbers.size();
    for (int i = 0; i < k - 1; i++) {
        answer += 2;
        if (answer >= len)
            answer -= len;
    }
    return numbers[answer];
}