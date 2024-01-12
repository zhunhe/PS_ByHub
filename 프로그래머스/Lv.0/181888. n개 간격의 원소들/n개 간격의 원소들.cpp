#include <vector>

using namespace std;

vector<int> solution(vector<int> nums, int n) {
    vector<int> answer;
    for (int i = 0; i < nums.size(); i += n)
        answer.push_back(nums[i]);
    return answer;
}