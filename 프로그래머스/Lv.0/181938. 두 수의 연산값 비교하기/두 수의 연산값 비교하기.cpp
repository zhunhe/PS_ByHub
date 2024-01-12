#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    return max(2 * a * b, stoi(to_string(a) + to_string(b)));
}