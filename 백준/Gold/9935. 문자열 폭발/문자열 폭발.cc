/*
 * 문자열 폭발
 * https://www.acmicpc.net/problem/9935
 */

#include <iostream>
//#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s1, s2;	cin >> s1 >> s2;
	vector<char> ans;
	for (auto c : s1) {
		ans.push_back(c);
		if (ans.size() < s2.length()) continue;
		bool flag = true;
		for (int j = 0; j < s2.length(); j++) {
			if (ans[ans.size() - 1 - j] != s2[s2.length() - 1 - j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			for (int i = 0; i < s2.length(); i++) {
				ans.pop_back();
			}
		}
	}
	if (ans.size())  {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i];
	}
	else cout << "FRULA";
}
