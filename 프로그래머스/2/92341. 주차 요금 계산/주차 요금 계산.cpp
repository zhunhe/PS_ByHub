#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>

#include <iostream>

using namespace std;

struct parkingData {
    int time;
    string car, type;
};

#define DEFAULT_TIME    0
#define DEFAULT_FEE     1
#define UNIT_TIME       2
#define UNIT_FEE        3

bool cmp(const pair<string, int>& lhs, const pair<string, int>& rhs) {
    return lhs.first < rhs.first;
}

parkingData makeParkingData(const string& s) {
    stringstream ss(s);
    string time, car, type;
    ss >> time >> car >> type;

    parkingData data;
    data.time = stoi(time.substr(0, 2)) * 60 + stoi(time.substr(3, 2));
    data.car = car;
    data.type = type;
    return data;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    map<string, int> timeByCar;
    for (const string& record : records) {
        parkingData data = makeParkingData(record);
        timeByCar[data.car] += (data.type == "IN" ? -data.time : data.time);
    }
    for (auto& [car, time] : timeByCar)
        if (time <= 0)
            time += 24 * 60 - 1;
    vector<pair<string, int>> parking;
    for (auto [car, time] : timeByCar) {
        time = max(0, time - fees[DEFAULT_TIME]);
        int fee = fees[DEFAULT_FEE];
        fee += (time / fees[UNIT_TIME] + (time % fees[UNIT_TIME] != 0)) * fees[UNIT_FEE];
        parking.push_back({car, fee});
    }
    sort(parking.begin(), parking.end(), cmp);
    vector<int> answer;
    for (int i = 0; i < parking.size(); i++)
        answer.push_back(parking[i].second);
    return answer;
}