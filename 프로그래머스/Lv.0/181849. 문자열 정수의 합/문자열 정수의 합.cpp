#include <string>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for (const char c : num_str)
        answer += (c - '0');
    return answer;
}