#include <bits/stdc++.h>
using namespace std;

string replaceSharpToLower(string s) {
    map<string, string> m = { {"C#", "c"}, {"D#", "d"}, {"F#", "f"}, {"G#", "g"}, {"A#", "a"} };
    for (auto [key, value] : m) s = regex_replace(s, regex(key), value);
    return s;
}

int calculateLen(string s, string e) {
    const int sTime = (s[0] * 10 + s[1]) * 60 + (s[3] * 10 + s[4]);
    const int eTime = (e[0] * 10 + e[1]) * 60 + (e[3] * 10 + e[4]);
    return eTime - sTime;
}

string conv(string s, int len) {
    string tmp = s;
    while (s.size() < len) s += tmp;
    if (s.size() > len) s = s.substr(0, len);
    return s;
}

string solution(string m, vector<string> musicinfos) {
    m = replaceSharpToLower(m);
    string ans = "";
    int maxLen = 0;
    for (auto musicinfo : musicinfos) {
        stringstream ss(musicinfo);
        string s, e, title, repeat;

        getline(ss, s, ',');
        getline(ss, e, ',');
        getline(ss, title, ',');
        getline(ss, repeat, ',');

        repeat = replaceSharpToLower(repeat);
        const int len = calculateLen(s, e);
        repeat = conv(repeat, len);

        if (repeat.find(m) == string::npos) continue;
        if (maxLen < len) {
            ans = title;
            maxLen = len;
        }
    }
    return ans.empty() ? "(None)" : ans;
}