#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    return vector<int>(num_list.begin(), num_list.begin() + n);
}