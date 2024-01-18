#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums) {
    const int len = nums.size();

    set<int> st;
    for (int i = 0; i < len; i++) {
        int sum = 0;
        for (int j = i; j < i + len; j++) {
            sum += nums[j % len];
            st.insert(sum);
        }
    }
    return st.size();
}