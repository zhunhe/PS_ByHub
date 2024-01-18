#include <string>
#include <vector>

using namespace std;

#define TIME    0
#define DAMAGE  1

#define AMOUNT  1
#define BONUS   2

int solution(vector<int> bandage, int hp, vector<vector<int>> attacks) {
    const int maxHP = hp, endTime = attacks.back()[0];
    int cnt = 0, idx = 0;
    for (int t = 1; t < endTime + 1; t++) {
        if (attacks[idx][TIME] == t) {
            if ((hp -= attacks[idx][DAMAGE]) <= 0)
                return -1;
            cnt = 0;
            ++idx;
            continue;
        }
        ++cnt;
        hp = min(hp + bandage[AMOUNT], maxHP);
        if (cnt == bandage[TIME]) {
            hp = min(hp + bandage[BONUS], maxHP);
            cnt = 0;
        }
    }
    return hp;
}