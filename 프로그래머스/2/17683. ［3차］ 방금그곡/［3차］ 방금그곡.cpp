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
        // musicinfo = regex_replace(musicinfo, regex(","), " ");
        stringstream ss(musicinfo);
        // string s, e, title, repeat;
        // ss >> s >> e >> title >> repeat;

        string tmp;
        getline(ss, tmp, ':');
        int start = stoi(tmp) * 60;
        getline(ss, tmp, ',');
        start += stoi(tmp);
        
        getline(ss, tmp, ':');
        int end = stoi(tmp) * 60;
        getline(ss, tmp, ',');
        end += stoi(tmp);
        
        const int playTime = end - start;
        
        getline(ss, tmp, ',');
        const string title = tmp;
        
        getline(ss, tmp, ',');
        string repeat = tmp;

        repeat = replaceSharpToLower(repeat);
        // const int playTime = calculateLen(s, e);
        repeat = conv(repeat, playTime);

        if (repeat.find(m) != string::npos && maxLen < playTime) {
            ans = title;
            maxLen = playTime;
        }
    }
    return ans.empty() ? "(None)" : ans;
}