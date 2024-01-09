#include <string>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    int number1 = 0, number2 = 0;
    for (const char c: bin1) number1 = number1 * 2 + (c - '0');
    for (const char c: bin2) number2 = number2 * 2 + (c - '0');
    int number = number1 + number2;
    string answer = "";
    while (number > 0) {
        answer += (number % 2 == 1 ? '1' : '0');
        number >>= 1;
    }
    reverse(answer.begin(), answer.end());
    return !answer.empty() ? answer : "0";
}