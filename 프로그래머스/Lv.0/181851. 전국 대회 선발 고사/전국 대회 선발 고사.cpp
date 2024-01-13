#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int, int>> picked;
    for (int i = 0; i < attendance.size(); i++)
        if (attendance[i])
            picked.push_back({rank[i], i});
    sort(picked.begin(), picked.end());
    return 10000 * picked[0].second + 100 * picked[1].second + picked[2].second;
}