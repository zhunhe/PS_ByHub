#include <string>
#include <vector>

using namespace std;

int month[13] = {0, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
const string day[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};

string solution(int a, int b) {
    for (int i = 1; i < 13; i++)
        month[i] += month[i - 1];
    return day[(month[a] + b) % 7];
}