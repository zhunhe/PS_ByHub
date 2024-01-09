#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> babbling) {
    vector<string> stringSet = {
        "aya", "ye", "woo", "ma"
    };

    int answer = 0;
    for (string s: babbling) {
        for (string sSet: stringSet)
            if (s.find(sSet) != string::npos)
                s.replace(s.find(sSet), sSet.size(), " ");
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if (s.empty())
            answer++;
    }
    return answer;
}