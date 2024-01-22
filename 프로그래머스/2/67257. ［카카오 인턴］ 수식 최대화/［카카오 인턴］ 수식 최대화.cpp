#include <bits/stdc++.h>
using namespace std;

vector<string> conv(vector<string> v, string oper) {
    vector<string> ret;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == oper) {
            string lhs = ret.back(); ret.pop_back();
            if (oper == "*")
                ret.push_back(to_string(stoll(lhs) * stoll(v[i + 1])));
            else if (oper == "+")
                ret.push_back(to_string(stoll(lhs) + stoll(v[i + 1])));
            else if (oper == "-")
                ret.push_back(to_string(stoll(lhs) - stoll(v[i + 1])));
            ++i;
        } else
            ret.push_back(v[i]);
    }
    return ret;
}

long long solution(string s) {
    s = regex_replace(s, regex("\\+"), " + ");
    s = regex_replace(s, regex("\\*"), " * ");
    s = regex_replace(s, regex("-"), " - ");
    stringstream ss(s);
    vector<string> v, ret; string tmpS;
    while (ss >> tmpS) ret.push_back(tmpS);
    long long ans = 0;
    // * + -
    v = conv(ret, "*"); v = conv(v, "+"); v = conv(v, "-");
    ans = max(ans, abs(stoll(v.back())));
    // * - +
    v = conv(ret, "*"); v = conv(v, "-"); v = conv(v, "+");
    ans = max(ans, abs(stoll(v.back())));
    // + * -
    v = conv(ret, "+"); v = conv(v, "*"); v = conv(v, "-");
    ans = max(ans, abs(stoll(v.back())));
    // + - *
    v = conv(ret, "+"); v = conv(v, "-"); v = conv(v, "*");
    ans = max(ans, abs(stoll(v.back())));
    // - * +
    v = conv(ret, "-"); v = conv(v, "*"); v = conv(v, "+");
    ans = max(ans, abs(stoll(v.back())));
    // - + *
    v = conv(ret, "-"); v = conv(v, "+"); v = conv(v, "*");
    ans = max(ans, abs(stoll(v.back())));
    return ans;
}