#include <bits/stdc++.h>
using namespace std;

string solution(string polynomial) {
    int x = 0, number = 0, tmp = 0;
    for (const char c: polynomial) {
        if (isdigit(c)) tmp = tmp * 10 + (c - '0');
        else if (c == ' ')
            number += tmp, tmp = 0;
        else if (c == 'x')
            x += (tmp == 0 ? 1 : tmp), tmp = 0;
    }
    if (tmp > 0)
        number += tmp;
    string answer = "";
    if (x > 0)
        answer = (x == 1 ? "x" : to_string(x) + "x");
    if (x > 0 && number > 0)
        answer += " + ";
    if (number > 0)
        answer += to_string(number);    
    return answer;
}