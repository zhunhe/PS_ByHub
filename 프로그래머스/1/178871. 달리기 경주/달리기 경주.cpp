#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> m;
    for (int i = 0; i < players.size(); i++) m[players[i]] = i;
    for (const string& calling : callings) {
        if (m[calling] == 0) continue;
        int idx = m[calling];
        swap(players[idx - 1], players[idx]);
        m[players[idx - 1]] = idx - 1;
        m[players[idx]] = idx;
    }
    return players;
}