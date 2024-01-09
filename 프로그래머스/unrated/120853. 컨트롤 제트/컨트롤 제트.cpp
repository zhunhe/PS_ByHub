#include <string>
#include <vector>
#include <numeric>

#include <iostream>
using namespace std;

int solution(string s) {
    vector<int> numbers;
    int number = 0;
    bool neg = false;
    for (const char c: s) {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                number = number * 10 + (c - '0');
                break;
            case '-':
                neg = true;
                break;
            case ' ':
                numbers.push_back(neg ? -number : number);
                neg = false;
                number = 0;
                break;
            case 'Z':
                numbers.pop_back();
        }
    }
    if (number > 0)
        numbers.push_back(neg ? -number : number);
    return accumulate(numbers.begin(), numbers.end(), 0);
}