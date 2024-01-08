#include <string>

using namespace std;

int count[26];

string solution(string my_string) {
    for (const char c: my_string) {
        if (isupper(c)) count[c - 'A']++;
        if (islower(c)) count[c - 'a']++;
    }

    string answer = "";
    for (int i = 0; i < 26; i++)
        while (count[i]-- > 0)
            answer += 'a' + i;
    return answer;
}