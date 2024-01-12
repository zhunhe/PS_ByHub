#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < nums.size(); i++)
        i & 1 ? evenSum += nums[i] : oddSum += nums[i];
    return max(oddSum, evenSum);
}