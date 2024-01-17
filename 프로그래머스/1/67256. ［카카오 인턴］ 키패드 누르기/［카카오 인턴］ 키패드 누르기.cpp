#include <string>
#include <vector>
#include <map>

#include<iostream>

using namespace std;

const map<char, pair<int, int>> m = {
    {'1', {0,0}}, {'2', {0,1}}, {'3', {0,2}},
    {'4', {1,0}}, {'5', {1,1}}, {'6', {1,2}},
    {'7', {2,0}}, {'8', {2,1}}, {'9', {2,2}},
    {'*', {3,0}}, {'0', {3,1}}, {'#', {3,2}}
};

int diff(char now, char next) {
    return abs(m.at(now).first - m.at(next).first) + abs(m.at(now).second - m.at(next).second);
}

string solution(vector<int> numbers, string hand) {
    char l = '*', r = '#';
    string answer = "";
    for (int num : numbers) {
        const int diffL = diff(l, num + '0');
        const int diffR = diff(r, num + '0');
        if (num % 3 == 1)
            answer += "L", l = num + '0';
        else if (num != 0 && num % 3 == 0)
            answer += "R", r = num + '0';
        else if (diffL < diffR)
            answer += "L", l = num + '0';
        else if (diffR < diffL)
            answer += "R", r = num + '0';
        else if (hand == "right")
            answer += "R", r = num + '0';
        else
            answer += "L", l = num + '0';
    }
    return answer;
}