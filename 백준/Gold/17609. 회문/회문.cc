#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int t, n;
string s;

bool isPalindrome() {
    int left = 0, right = n - 1;
    while (left <= right)
        if (s[left++] != s[right--])
            return false;
    return true;
}

bool canPalindrome(int left, int right, bool canSkip) {
    if (left > right) return true;
    if (s[left] == s[right]) return canPalindrome(left + 1, right - 1, canSkip);
    if (canSkip) return max(canPalindrome(left + 1, right, false), canPalindrome(left, right - 1, false));
    return false;
}

int answer() {
    if (isPalindrome()) return 0;
    else if (canPalindrome(0, n - 1, 1)) return 1;
    else return 2;
}

int main(){
    FASTIO
    int t; cin >> t;
    while (t--) {
        cin >> s;
        n = s.size();
        cout << answer() << '\n';
    }
}
