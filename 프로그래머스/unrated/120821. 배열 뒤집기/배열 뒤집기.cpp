#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    const int len = num_list.size();

    for (int i = 0; i < len / 2; i++)
        swap(num_list[i], num_list[len - i - 1]);
    return num_list;
}