#include <bits/stdc++.h>
using namespace std;

int solution(string my_string) {
    vector<string> splitted;
    string s = "";
    for (const char c: my_string) {
        if (c == ' ') {
            splitted.push_back(s);
            s = "";
        } else {
            s += c;
        }
    }
    splitted.push_back(s);
    int answer = stoi(splitted[0]), number = 0;
    for (int i = 1; i < splitted.size(); i += 2) {
        if (splitted[i] == "+")
            answer += stoi(splitted[i + 1]);
        else if (splitted[i] == "-")
            answer -= stoi(splitted[i + 1]);
    }
    return answer;
}