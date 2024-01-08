#include <string>
#include <set>

using namespace std;

string solution(string my_string) {
    string result = "";
    set<char> check;

    for (const char c: my_string) {
        if (check.find(c) != check.end()) continue;
        result += c;
        check.insert(c);
    }
    return result;
}