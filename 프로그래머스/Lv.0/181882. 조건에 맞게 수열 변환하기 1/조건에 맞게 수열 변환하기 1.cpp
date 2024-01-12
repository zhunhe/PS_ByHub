#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for (int& num : arr) {
        if (num >= 50 && !(num & 1))
            num /= 2;
        else if (num < 50 && (num & 1))
            num *= 2;
    }
    return arr;
}