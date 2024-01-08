#include <string>

using namespace std;

string solution(string my_string) {
    string result = "";
    for (const char c: my_string)
        if (result.find(c) == string::npos)
            result += c;
    return result;
}