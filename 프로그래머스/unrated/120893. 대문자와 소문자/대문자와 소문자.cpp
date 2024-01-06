#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    const int size = my_string.size();
    for (int i = 0; i < size; i++)
        my_string[i] = isupper(my_string[i]) ? tolower(my_string[i]) : toupper(my_string[i]);
    return my_string;
}