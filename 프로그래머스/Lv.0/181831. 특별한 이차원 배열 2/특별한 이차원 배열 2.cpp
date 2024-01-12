#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arrs) {
    for (int i = 0; i < arrs.size(); i++)
        for (int j = 0; j < arrs[i].size(); j++)
            if (arrs[i][j] != arrs[j][i])
                return 0;
    return 1;
}