class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(target - nums[i]) != m.end()) {
                ans = {m[target - nums[i]], i};
                break;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};