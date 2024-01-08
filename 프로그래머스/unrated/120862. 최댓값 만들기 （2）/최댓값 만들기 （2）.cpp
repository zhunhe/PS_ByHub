#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    const int last = numbers.size() - 1;
    int answer = numbers[0] * numbers[1];
    answer = max(answer, numbers[0] * numbers[last]);
    answer = max(answer, numbers[last - 1] * numbers[last]);
    return answer;
}