#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int solution(vector<int> arr) {
    while (arr.size() > 1) {
        int num1 = arr.back(); arr.pop_back();
        int num2 = arr.back(); arr.pop_back();
        arr.push_back(num1 * num2 / gcd(num1, num2));
    }
    return arr.back();
}