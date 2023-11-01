#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define MAX 51
using namespace std;

int total;
int N, L, R;
int board[MAX][MAX];
bool visited[MAX][MAX];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
vector<pair<int, int>> pos;

void input() {

}

void make_union(int y, int x) {
    visited[y][x] = true;
    pos.push_back({y, x});

    for (int d=0; d < 4; d++) {
        int ny = y+dy[d];
        int nx = x+dx[d];
        if (ny < 0 || ny >= N || nx < 0 || nx >=N || visited[ny][nx]) continue; // 범위를 벗어나는 경우, 이미 방문한 경우
        int diff = abs(board[y][x] - board[ny][nx]); // 국경선을 공유하는 두 나라의 인구 차
        if (L <= diff && diff <= R) { // L명 이상, R명 이하인 경우
            total += board[ny][nx];
            make_union(ny, nx);
        }
    }
}

void solution() { // 인구 이동이 며칠 동안 발생하는지

    int ans = 0;
    while(true) {

        memset(visited, false, sizeof(visited)); // init

        bool ismove = false;
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                if (visited[i][j]) continue;
                pos.clear();
                total = board[i][j];
                make_union(i, j); // 연합을 이루고

                if (pos.size() == 1) continue;

                // 인구 이동
                ismove = true;
                int avg = total/(int)pos.size();
                for (int p=0; p<(int)pos.size(); p++) {
                    int y = pos[p].first;
                    int x = pos[p].second;
                    board[y][x] = avg;
                }
            }
        }
        if (!ismove) break; // 인구 이동이 발생하지 않는 경우
        ans++; // 인구 이동이 발생한 경우
    }
    cout << ans;
}

int main() {
    FASTIO
    cin >> N >> L >> R;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) cin >> board[i][j];
    }
    solution();
}