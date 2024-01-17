#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define CODE    0
#define DATE    1
#define MAXIMUM 2
#define REMAIN  3

string sortBy;

map<string, int> m = {
    {"code", 0}, {"date", 1}, {"maximum", 2}, {"remain", 3}
};

bool compare(const vector<int>& lhs, const vector<int>& rhs) {
    return lhs[m[sortBy]] < rhs[m[sortBy]];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    sortBy = sort_by;
    for (int i = 0; i < data.size(); i++)
        if (data[i][m[ext]] < val_ext)
            answer.push_back(data[i]);
    sort(answer.begin(), answer.end(), compare);
    return answer;
}