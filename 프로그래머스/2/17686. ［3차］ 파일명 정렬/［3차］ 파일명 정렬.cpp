#include <bits/stdc++.h>
using namespace std;

string convHeader(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    int i;
    while (i < s.size() && !isdigit(s[i])) ++i;
    string header = s.substr(0, i);
    
    return header;
}

int convNumber(string s) {
    int i;
    while (i < s.size() && !isdigit(s[i])) ++i;
    string header = s.substr(0, i);
    
    int j = i;
    while (j < s.size() && isdigit(s[j])) ++j;
    string number = s.substr(i, j - i);

    return stoi(number);
}

bool compare(const string& lhs, const string& rhs) {
    if (convHeader(lhs) == convHeader(rhs))
        return convNumber(lhs) < convNumber(rhs);
    return convHeader(lhs) < convHeader(rhs);
}

vector<string> solution(vector<string> files) {
    stable_sort(files.begin(), files.end(), compare);
    return files;
}