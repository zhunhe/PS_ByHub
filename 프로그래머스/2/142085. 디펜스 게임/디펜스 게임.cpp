#include <bits/stdc++.h>
using namespace std;

int solution(int n, int k, vector<int> enemy) {
    priority_queue<int> pq;
    for (int i = 0; i < enemy.size(); i++) {
        pq.push(enemy[i]);
        n -= enemy[i];
        if (n < 0) {
            if (k == 0) return i;
            --k;
            n += pq.top();
            pq.pop();
        }
    }
    return enemy.size();
}