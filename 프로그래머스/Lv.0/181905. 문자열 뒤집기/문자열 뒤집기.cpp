#include <string>

using namespace std;

string solution(string my_string, int s, int e) {
    while (s < e)
        swap(my_string[s++], my_string[e--]);
    return my_string;
}