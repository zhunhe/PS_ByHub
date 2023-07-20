#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define MAX 10000

struct Data {
    int from, to, cost;

    bool operator<(const Data& rhs) const {
        return from < rhs.from;
    }
};

int n, d, from, to, cost;
int dist[MAX + 2];
vector<Data> v;

int main() {
    FASTIO
    cin >> n >> d;
    for (int i = 0; i < d + 1; i++) dist[i] = i;
    for (int i = 0; i < n; i++) {
        cin >> from >> to >> cost;
        v.push_back({from, to, cost});
    }
    sort(v.begin(), v.end());
    for (Data elem : v) {
        dist[elem.to] = min(dist[elem.to], dist[elem.from] + elem.cost);
        for (int i = 1; i < d + 1; i++)
            dist[i] = min(dist[i], dist[i - 1] + 1);
    }
    cout << dist[d];
}