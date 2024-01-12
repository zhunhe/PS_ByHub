#include <string>
#include <map>
using namespace std;

int solution(int n, string control) {
    map<char, int> command = {
        {'w', 1},
        {'s', -1},
        {'d', 10},
        {'a', -10}
    };
    for (const char& c : control)
        n += command[c];
    return n;
}