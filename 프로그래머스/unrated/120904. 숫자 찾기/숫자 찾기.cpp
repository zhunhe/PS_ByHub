#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int index = 0;

    while (num > 0) {
        if (index > 0) index++;
        if (num % 10 == k) index = 1;
        num /= 10;
    }
    return index == 0 ? -1 : index;
}