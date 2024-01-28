#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    int r = 0, t = 0, c = 0, f = 0, j = 0, m = 0, a = 0, n = 0;
    for (int i = 0; i < survey.size(); i++) {
        switch (survey[i][0]) {
            case 'R': choices[i] > 4 ? t += choices[i] - 4 : r += 4 - choices[i]; break;
            case 'T': choices[i] > 4 ? r += choices[i] - 4 : t += 4 - choices[i]; break;
            case 'C': choices[i] > 4 ? f += choices[i] - 4 : c += 4 - choices[i]; break;
            case 'F': choices[i] > 4 ? c += choices[i] - 4 : f += 4 - choices[i]; break;
            case 'J': choices[i] > 4 ? m += choices[i] - 4 : j += 4 - choices[i]; break;
            case 'M': choices[i] > 4 ? j += choices[i] - 4 : m += 4 - choices[i]; break;
            case 'A': choices[i] > 4 ? n += choices[i] - 4 : a += 4 - choices[i]; break;
            case 'N': choices[i] > 4 ? a += choices[i] - 4 : n += 4 - choices[i]; break;
        }
    }
    string ans = "";
    ans += r >= t ? "R" : "T";
    ans += c >= f ? "C" : "F";
    ans += j >= m ? "J" : "M";
    ans += a >= n ? "A" : "N";
    return ans;
}