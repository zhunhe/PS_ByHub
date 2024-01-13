#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> v, vector<int> nums) {
    if (n == 1) return {nums.begin(), nums.begin() + v[1] + 1};
    if (n == 2) return {nums.begin() + v[0], nums.end()};
    if (n == 3) return {nums.begin() + v[0], nums.begin() + v[1] + 1};
    vector<int> ans;
    for (int i = v[0]; i < v[1] + 1; i += v[2]) ans.push_back(nums[i]);
    return ans;
}