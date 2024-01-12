#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int multiplied = 1, primeSum = 0;
    for (int num : num_list) multiplied *= num;
    for (int num : num_list) primeSum += num;
    primeSum *= primeSum;
    return primeSum < multiplied ? 0 : 1;
}