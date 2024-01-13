#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> ans(picture.size() * k);
    for (int i = 0; i < picture.size(); i++) {
        for (int j = 0; j < picture[i].size(); j++)
            for (int l = 0; l < k; l++)
                ans[i * k] += picture[i][j];
    }
    for (int i = 0; i < ans.size(); i += k)
        for (int j = i + 1; j < i + k; j++)
            ans[j] = ans[i];
    return ans;
}