#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> order) {
    int latteCnt = count_if(order.begin(), order.end(), [](const auto& s) {
        return s.find("cafelatte") != string::npos;
    });
    return (order.size() - latteCnt) * 4500 + latteCnt * 5000;
}