#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    const int h = arr.size();
    const int w = arr[0].size();
    for (int i = h; i < w; i++) {
        vector<int> tmp;
        for (int j = 0; j < w; j++)
            tmp.push_back(0);
        arr.push_back(tmp);
    }
    for (int i = w; i < h; i++)
        for (int j = 0; j < h; j++)
            arr[j].push_back(0);
    return arr;
}