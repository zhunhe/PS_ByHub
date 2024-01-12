#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int ans = 0;
    for (int num : num_list) {
        while (num > 1) {
            num >>= 1;
            ans ++;
        }
    }
    return ans;
}