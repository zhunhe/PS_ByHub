#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int oddSum = 0, evenSum = 0;
    if (nums.size() & 1) oddSum = nums.back();
    for (int i = 1; i < nums.size(); i += 2) {
        evenSum += nums[i];
        oddSum += nums[i - 1];
    }
    return max(oddSum, evenSum);
}