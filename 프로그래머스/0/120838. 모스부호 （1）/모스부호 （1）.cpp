#include <bits/stdc++.h>
using namespace std;

vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter) {
    stringstream ss(letter);
    string ans = "";
    while (ss >> letter) {
        for (int i = 0; i < 26; i++)
            if (letter == morse[i])
                ans += i + 'a';
    }
    return ans;
}