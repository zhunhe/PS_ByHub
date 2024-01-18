#include <string>
#include <vector>
#include <regex>
#include <unordered_map>

using namespace std;

int nowYear, nowMonth, nowDay;
unordered_map<char, int> termByType;

void initToday(string today) {
    today = regex_replace(today, regex("\\."), " ");
    stringstream ss(today);
    ss >> nowYear >> nowMonth >> nowDay;
}

void initTerms(const vector<string>& terms) {
    for (const string& s : terms) {
        stringstream ss(s);
        char type; int term;
        ss >> type >> term;
        termByType[type] = term;
    }
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    initToday(today);
    initTerms(terms);
    vector<int> answer;
    for (int i = 0; i < privacies.size(); i++) {
        stringstream ss(privacies[i]);
        string date; char type;
        ss >> date >> type;

        date = regex_replace(date, regex("\\."), " ");
        ss.str(date);
        int year, month, day;
        ss >> year >> month >> day;
        month += termByType[type];
        while (month > 12)
            ++year, month -= 12;
        if (year > nowYear) continue;
        if (year == nowYear && month > nowMonth) continue;
        if (year == nowYear && month == nowMonth && day > nowDay) continue;
        answer.push_back(i + 1);
    }
    return answer;
}