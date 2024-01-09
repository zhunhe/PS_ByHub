#include <string>
#include <cstring>

using namespace std;

int solution(string str1, string str2) {
    for (int i = 0; i < str1.size() - str2.size() + 1; i++) {
        for (int j = 0; j < str2.size(); j++) {
            if (str1[i + j] != str2[j]) break;
            if (j == str2.size() - 1) return 1;
        }
    }
    return 2;
}