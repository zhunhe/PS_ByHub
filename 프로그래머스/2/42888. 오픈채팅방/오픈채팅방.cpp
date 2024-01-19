#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> record) {
    unordered_map<string, string> nickByUID;
    vector<string> ans;
    for (auto s : record) {
        stringstream ss(s);
        string cmd, uid, nick;
        ss >> cmd >> uid;
        if (cmd == "Enter" || cmd == "Change") {
            ss >> nick;
            nickByUID[uid] = nick;
        }
        if (cmd == "Enter" || cmd == "Leave")
            ans.push_back(uid + " " + cmd);
    }
    for (auto& s : ans) {
        stringstream ss(s);
        string uid, cmd; ss >> uid >> cmd;
        s = nickByUID[uid] + "님이 " + (cmd == "Enter" ? "들어왔습니다." : "나갔습니다.");
    }
    return ans;
}