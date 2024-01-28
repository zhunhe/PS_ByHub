#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> indexByName;
    unordered_map<int, string> nameByIndex;
    for (int i = 0; i < players.size(); i++) {
        indexByName[players[i]] = i;
        nameByIndex[i] = players[i];
    }
    for (const auto& call : callings) {
        int idx = indexByName[call];
        if (idx > 0) {
            swap(players[idx - 1], players[idx]);

            string behind = players[idx];
            indexByName[call] = idx - 1;
            indexByName[behind] = idx;
            nameByIndex[idx - 1] = call;
            nameByIndex[idx] = behind;
        }
    }
    return players;
}