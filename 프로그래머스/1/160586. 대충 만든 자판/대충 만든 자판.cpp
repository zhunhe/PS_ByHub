#include <string>
#include <vector>

using namespace std;

#define INF 987654321

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> cnt(26, INF);
    for (const string& key : keymap)
        for (int i = 0; i < key.size(); i++)
            cnt[key[i] - 'A'] = min(cnt[key[i] - 'A'], i + 1);
    vector<int> answer(targets.size());
    for (int i = 0; i < targets.size(); i++) {
        for (const char c : targets[i]) {
            if (cnt[c - 'A'] == INF) {
                answer[i] = -1;
                break;
            }
            answer[i] += cnt[c - 'A'];
        }
    }
    return answer;
}