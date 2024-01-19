#include <bits/stdc++.h>
using namespace std;

vector<string> conv1(string s) {
    s = s.substr(2, s.size() - 4);
    s = regex_replace(s, regex("},\\{"), " ");

    stringstream ss(s);
    string tmp;
    vector<string> v;
    while (ss >> tmp)
        v.push_back(regex_replace(tmp, regex(","), " "));
    return v;
}

vector<int> conv2(vector<string> v) {
    vector<int> ans;
    for (auto s : v) {
        stringstream ss(s); int num;
        while (ss >> num)
            if (ans.empty() || find(ans.begin(), ans.end(), num) == ans.end())
                ans.push_back(num);
    }
    return ans;
}

bool compare(const string& lhs, const string& rhs) {
    return lhs.size() < rhs.size();
}

vector<int> solution(string s) {
    vector<string> v = conv1(s);
    sort(v.begin(), v.end(), compare);
    return conv2(v);
}