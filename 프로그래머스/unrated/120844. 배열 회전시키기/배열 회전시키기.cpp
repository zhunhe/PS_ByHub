#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    direction == "left" ?
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end()) :
        rotate(numbers.begin(), numbers.end() - 1, numbers.end());
    return numbers;
}