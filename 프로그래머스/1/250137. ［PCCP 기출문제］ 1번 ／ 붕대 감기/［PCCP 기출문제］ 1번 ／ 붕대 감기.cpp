#include <string>
#include <vector>

using namespace std;

#define TIME    0
#define DAMAGE  1

#define AMOUNT  1
#define BONUS   2

int solution(vector<int> bandage, int hp, vector<vector<int>> attacks) {
    const int maxHP = hp;
    int time = 0;
    for (vector<int> attack : attacks) {
        const int diffTime = attack[TIME] - time - 1;
        hp += diffTime * bandage[AMOUNT];
        hp += diffTime / bandage[TIME] * bandage[BONUS];
        hp = min(hp, maxHP);
        hp -= attack[DAMAGE];
        if (hp <= 0)
            return -1;
        time = attack[TIME];
    }
    return hp;
}