#include <string>
#include <vector>

#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    vector<bool> skips(26);
    for (char c : skip) skips[c - 'a'] = true;
    for (char& c : s) {
        for (int i = 0; i < index; i++) {
            c = c + 1 > 'z' ? 'a' : c + 1;
            while (skips[c - 'a'])
                c = c + 1 > 'z' ? 'a' : c + 1;
        }
    }
    return s;
}