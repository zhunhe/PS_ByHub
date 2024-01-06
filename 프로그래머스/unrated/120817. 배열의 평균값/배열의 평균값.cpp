#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int sum = 0;
    for (int elem : numbers) sum += elem;
    return static_cast<double>(sum) / numbers.size();
}