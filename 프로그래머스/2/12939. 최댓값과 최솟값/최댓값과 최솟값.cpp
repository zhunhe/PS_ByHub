#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    stringstream ss(s);
    vector<int> nums;
    while (ss) {
        int num; ss >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    return to_string(nums[0]) + " " + to_string(nums.back());
}