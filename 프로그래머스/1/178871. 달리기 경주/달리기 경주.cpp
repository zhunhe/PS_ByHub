#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> indexByName;
    for (int i = 0; i < players.size(); i++)
        indexByName[players[i]] = i;
    for (const auto& call : callings) {
        int idx = indexByName[call];
        if (idx > 0) {
            --indexByName[call];
            ++indexByName[players[idx - 1]];

            swap(players[idx - 1], players[idx]);
        }
    }
    return players;
}