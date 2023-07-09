#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;

int main() {
    FASTIO
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (maxHeap.empty()) {
            maxHeap.push(x);
        } else {
            if (maxHeap.size() > minHeap.size())
                minHeap.push(x);
            else
                maxHeap.push(x);
            if (maxHeap.top() > minHeap.top()) {
                int _max = maxHeap.top(), _min = minHeap.top();
                maxHeap.pop(); maxHeap.push(_min);
                minHeap.pop(); minHeap.push(_max);
            }
        }
        cout << maxHeap.top() << '\n';
    }
}