#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0, num = 0;
    for (const char c: my_string) {
        if (!isdigit(c)) {
            answer += num;
            num = 0;
            continue;
        }
        num *= 10;
        num += (c - '0');
    }
    return answer + num;
}