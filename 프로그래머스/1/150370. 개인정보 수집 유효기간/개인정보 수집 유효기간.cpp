#include <bits/stdc++.h>
using namespace std;

int conv(string today) {
    today = regex_replace(today, regex("\\."), " ");
    stringstream ss(today);
    string year, month, day;
    ss >> year >> month >> day;
    return stoi(year) * 28 * 12 + stoi(month) * 28 + stoi(day);
}

unordered_map<char, int> makeTerm(const vector<string>& terms) {
    unordered_map<char, int> term;
    for (const auto& s : terms) {
        stringstream ss(s);
        char type; int period;
        ss >> type >> period;
        term[type] = period;
    }
    return term;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    const int nToday = conv(today);
    unordered_map<char, int> term = makeTerm(terms);
    vector<int> ans;
    for (int i = 0; i < privacies.size(); i++) {
        stringstream ss(privacies[i]);
        string date; char type;
        ss >> date >> type;
        const int expiration = conv(date) + term[type] * 28;
        if (expiration <= nToday) ans.push_back(i + 1);
    }
    return ans;
}