#include <string>

using namespace std;

string solution(int num) {
    return num & 1 ? "Odd" : "Even";
}