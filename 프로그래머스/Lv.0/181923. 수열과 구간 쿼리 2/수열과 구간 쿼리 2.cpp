#include <vector>
#include <algorithm>

using namespace std;

#define INF 987654321

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> ans;
    for (vector<int> q : queries) {
        int _min = INF;
        for (int i = q[0]; i < q[1] + 1; i++)
            if (arr[i] > q[2])
                _min = min(_min, arr[i]);
        ans.push_back(_min == INF ? -1 : _min);
    }
    return ans;
}