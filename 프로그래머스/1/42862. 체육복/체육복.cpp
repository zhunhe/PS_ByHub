#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> cnt(n + 1);
    for (int elem : lost) --cnt[elem];
    for (int elem : reserve) ++cnt[elem];
    for (int i = 1; i < n + 1; i++) {
        if (cnt[i] == -1) {
            if (cnt[i - 1] == 1)
                cnt[i - 1] = cnt[i] = 0;
            else if (cnt[i + 1] == 1)
                cnt[i + 1] = cnt[i] = 0;
        }
    }
    int answer = 0;
    for (int i = 1; i < n + 1; i++)
        if (cnt[i] >= 0)
            ++answer;
    return answer;
}