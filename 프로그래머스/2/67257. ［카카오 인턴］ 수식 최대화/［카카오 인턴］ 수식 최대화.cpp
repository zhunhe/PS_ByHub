#include <bits/stdc++.h>
using namespace std;

vector<string> conv(vector<string> v, string oper) {
    vector<string> ret;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != oper)
            ret.push_back(v[i]);
        else {
            long long num;
            if (oper == "*")
                num = stoll(ret.back()) * stoll(v[i + 1]);
            else if (oper == "+")
                num = stoll(ret.back()) + stoll(v[i + 1]);
            else if (oper == "-")
                num = stoll(ret.back()) - stoll(v[i + 1]);
            ret[ret.size() - 1] = to_string(num);
            ++i;
        }
    }
    return ret;
}

long long solution(string expression) {
    expression = regex_replace(expression, regex("-"), " - ");
    expression = regex_replace(expression, regex("\\+"), " + ");
    expression = regex_replace(expression, regex("\\*"), " * ");
    stringstream ss(expression);
    vector<string> v;
    string s;
    while (ss >> s) v.push_back(s);
    // for (auto elem : v) cout << elem << ' ';
    long long ans = 0;
    // * + -
    ans = max(ans, abs(stoll(conv(conv(conv(v, "*"), "+"), "-")[0])));
    // * - +
    ans = max(ans, abs(stoll(conv(conv(conv(v, "*"), "-"), "+")[0])));
    // + * -
    ans = max(ans, abs(stoll(conv(conv(conv(v, "+"), "*"), "-")[0])));
    // + - *
    ans = max(ans, abs(stoll(conv(conv(conv(v, "+"), "-"), "*")[0])));
    // - * +
    ans = max(ans, abs(stoll(conv(conv(conv(v, "-"), "*"), "+")[0])));
    // - + *
    ans = max(ans, abs(stoll(conv(conv(conv(v, "-"), "+"), "*")[0])));
    return ans;
}