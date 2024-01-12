#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> nums) {
    if (nums.size() >= 11)
        return accumulate(nums.begin(), nums.end(), 0);
    return accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
}