#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int before = 0;
    const int maxHealth = health;
    for (const auto& v : attacks) {
        const int now = v[0], damage = v[1], diff = now - before - 1;
        health += diff * bandage[1] + diff / bandage[0] * bandage[2];
        health = min(health, maxHealth);
        health -= damage;
        if (health <= 0) return -1;
        before = now;
    }
    return health;
}