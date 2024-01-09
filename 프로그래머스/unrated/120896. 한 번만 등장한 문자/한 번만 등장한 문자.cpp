#include <string>
#include <vector>

using namespace std;

int count[26];

string solution(string s) {
    for (const char c: s)
        count[c - 'a']++;
    string answer = "";
    for (int i = 0; i < 26; i++)
        if (count[i] == 1)
            answer += 'a' + i;
    return answer;
}