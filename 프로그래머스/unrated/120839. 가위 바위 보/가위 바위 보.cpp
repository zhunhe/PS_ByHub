#include <string>
#include <vector>

using namespace std;

#define ROCK     '0'
#define SCISSORS '2'
#define PAPER    '5'

string solution(string rsp) {
    string result = "";
    for (const char c: rsp)
        result += c == ROCK ? PAPER :
                  c == SCISSORS ? ROCK :
                  SCISSORS;
    return result;
}