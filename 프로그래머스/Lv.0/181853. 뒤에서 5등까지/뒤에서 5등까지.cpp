#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return vector<int>(nums.begin(), nums.begin() + 5);
}