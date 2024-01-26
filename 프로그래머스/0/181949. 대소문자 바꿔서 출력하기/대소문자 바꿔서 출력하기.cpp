#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str; cin >> str;
    for (auto& c : str) c = isupper(c) ? tolower(c) : toupper(c);
    cout << str;
    return 0;
}