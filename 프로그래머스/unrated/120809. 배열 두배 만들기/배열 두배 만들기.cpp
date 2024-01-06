#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    const int size = numbers.size();

    for (int i = 0; i < size; i++)
        numbers[i] *= 2;
    return numbers;
}