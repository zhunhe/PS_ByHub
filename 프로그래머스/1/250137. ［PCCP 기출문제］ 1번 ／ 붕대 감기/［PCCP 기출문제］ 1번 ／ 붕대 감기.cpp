#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int t = 0;
    const int maxHealth = health;
    for (const auto& v : attacks) {
        const int diff = v[0] - t - 1;
        health += diff * bandage[1] + diff / bandage[0] * bandage[2];
        health = min(health, maxHealth);
        health -= v[1];
        if (health <= 0) return -1;
        t = v[0];
    }
    return health;
}