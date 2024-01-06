#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    const string vowels = "aeiou";

    for (char c: my_string) {
        if (vowels.find(c) == string::npos) // not found
            answer += c;
    }
    return answer;
}