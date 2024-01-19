#include <bits/stdc++.h>
using namespace std;

bool solution(vector<string> phone_book) {
    map<string, int> m;
    for (const string& hp : phone_book)
        for (int i = 1; i < hp.size(); i++)
            m[hp.substr(0, i)] = hp.size();
    for (const string& hp : phone_book)
        if (m.find(hp) != m.end() && m[hp] != hp.size())
            return false;
    return true;
}