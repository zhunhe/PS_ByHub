#include <bits/stdc++.h>
using namespace std;

struct Data {
    string head, tail;
    int number;
};

Data conv(const string& s) {
    Data ret;
    int len = 0;
    while (!isdigit(s[len])) ++len;
    ret.head = s.substr(0, len);
    transform(ret.head.begin(), ret.head.end(), ret.head.begin(), ::tolower);
    while (isdigit(s[len])) ++len;
    ret.number = stoi(s.substr(ret.head.size(), len - ret.head.size()));
    ret.tail = s.substr(len);
    return ret;
}

vector<string> solution(vector<string> files) {
    stable_sort(files.begin(), files.end(), [](const auto& lhs, const auto& rhs) {
        const Data l = conv(lhs), r = conv(rhs);
        if (l.head == r.head)
            return l.number < r.number;
        return l.head < r.head;
    });
    return files;
}