#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums) {
    const int len = nums.size();
    nums.insert(nums.end(), nums.begin(), nums.end());

    set<int> st;
    for (int cnt = 1; cnt < len + 1; cnt++) {
        for (int idx = 0; idx < len + 1; idx++) {
            int sum = 0;
            for (int k = 0; k < cnt; k++)
                sum += nums[idx + k];
            st.insert(sum);
        }
    }
    return st.size();
}