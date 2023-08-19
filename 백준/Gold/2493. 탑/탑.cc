#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    FASTIO
	int n;	cin >> n;
	vector<int> tower(n), answer(n);
    for (int& elem : tower) cin >> elem;
	stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && tower[i] > tower[st.top()]) {
			answer[st.top()] = i + 1;
			st.pop();
		}
		st.push(i);
	}
    for (int elem : answer) cout << elem << ' ';
}