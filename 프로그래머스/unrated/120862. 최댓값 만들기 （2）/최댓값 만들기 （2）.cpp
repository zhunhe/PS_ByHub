#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    const int last = numbers.size() - 1;
    return max(numbers[0] * numbers[1], numbers[last - 1] * numbers[last]);
}