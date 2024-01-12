#include <vector>

using namespace std;

int solution(vector<int> nums, int idx) {
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] == 1 && i >= idx)
            return i;
    return -1;
}