#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> rank = {6, 6, 5, 4, 3, 2, 1};
    vector<bool> check(47);
    for (int num : win_nums) check[num] = true;
    int cnt = 0;
    for (int lotto : lottos) cnt += check[lotto];
    int zeroCnt = 0;
    for (int lotto : lottos)
        if (lotto == 0)
            ++zeroCnt;
    return {rank[cnt + zeroCnt], rank[cnt]};
}