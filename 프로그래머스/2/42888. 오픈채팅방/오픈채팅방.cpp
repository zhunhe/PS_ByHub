#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> record) {
    unordered_map<string, string> m;    // uid, nick
    vector<string> ans;
    for (const auto& s : record) {
        stringstream ss(s);
        string cmd, uid, nick;
        ss >> cmd >> uid;
        if (cmd == "Enter" || cmd == "Change") {
            ss >> nick;
            m[uid] = nick;
        }
        if (cmd == "Enter" || cmd == "Leave")
            ans.push_back(uid + " " + cmd);
    }
    for (auto& s : ans) {
        stringstream ss(s);
        string uid, cmd;
        ss >> uid >> cmd;
        if (cmd == "Enter")
            s = m[uid] + "님이 들어왔습니다.";
        else
            s = m[uid] + "님이 나갔습니다.";
    }
    return ans;
}