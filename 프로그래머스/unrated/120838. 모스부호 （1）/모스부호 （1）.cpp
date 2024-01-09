#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, char> morse = {
    {".-", 'a'},
    {"-...", 'b'},
    {"-.-.", 'c'},
    {"-..", 'd'},
    {".", 'e'},
    {"..-.", 'f'},
    {"--.", 'g'},
    {"....", 'h'},
    {"..", 'i'},
    {".---", 'j'},
    {"-.-", 'k'},
    {".-..", 'l'},
    {"--", 'm'},
    {"-.", 'n'},
    {"---", 'o'},
    {".--.", 'p'},
    {"--.-", 'q'},
    {".-.", 'r'},
    {"...", 's'},
    {"-", 't'},
    {"..-", 'u'},
    {"...-", 'v'},
    {".--", 'w'},
    {"-..-", 'x'},
    {"-.--", 'y'},
    {"--..", 'z'}
};

string solution(string letter) {
    string answer = "", tmp = "";
    for (const char c: letter) {
        if (c == ' ') {
            answer += morse[tmp];
            tmp = "";
            continue;
        }
        tmp += c;
    }
    answer += morse[tmp];
    return answer;
}