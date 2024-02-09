#include <bits/stdc++.h>
using namespace std;

map<string, string> dict = { {"C#", "c"}, {"D#", "d"}, {"F#", "f"}, {"G#", "g"}, {"A#", "a"} };

int conv(const string& t) {
    const int h = stoi(t.substr(0, 2));
    const int m = stoi(t.substr(3));
    return h * 60 + m;
}

string solution(string m, vector<string> musicinfos) {
    for (const auto& [key, val] : dict)
        m = regex_replace(m ,regex(key), val);
    string ans = "";
    int maxLen = 0;
    for (auto info : musicinfos) {
        stringstream ss(info);
        string start, end, title, song;
        getline(ss, start, ',');
        getline(ss, end, ',');
        getline(ss, title, ',');
        getline(ss, song, ',');
        const int len = conv(end) - conv(start);
        if (len <= maxLen) continue;
        for (const auto& [key, val] : dict)
            song = regex_replace(song ,regex(key), val);
        while (song.size() < len) song += song;
        song = song.substr(0, len);
        if (song.find(m) == string::npos) continue;
        ans = title;
        maxLen = len;
    }
    return ans.empty() ? "(None)" : ans;
}