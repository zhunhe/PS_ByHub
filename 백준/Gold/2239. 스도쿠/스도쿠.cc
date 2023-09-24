/*
 * 스도쿠
 * https://www.acmicpc.net/problem/2239
 */

#include "bits/stdc++.h"
using namespace std;
#define LEN		9
vector<vector<int>> board;
bool solve;

bool findXY(int *y, int *x) {
	for (int i = 0; i < LEN; i++) {
		for (int j = 0; j < LEN; j++) {
//			printf("board[%d][%d]: %d\n", i, j, board[i][j]);
			if (board[i][j] == 0) {
				*y = i;
				*x = j;
//				printf("find! board[%d][%d]: %d\n", *y, *x, board[*y][*x]);
				return true;
			}
		}
	}
	return false;
}

bool isValid(int y, int x) {
	if (board[y][x] == 0) return false;
	for (int i = 0; i < LEN; i++) {
		if (i != x && board[y][x] == board[y][i]) return false;
		if (i != y && board[y][x] == board[i][x]) return false;
	}
	int y_s = y/3*3, x_s = x/3*3;
	for (int i = y_s; i < y_s + 3; i++) {
		for (int j = x_s; j < x_s + 3; j++) {
			if (i != y && j != x && board[y][x] == board[i][j])
				return false;
		}
	}
	return true;
}

void printBoard() {
	for (int i = 0; i < LEN; i++)
		for (int j = 0; j < LEN; j++)
			cout << board[i][j] << (j == LEN - 1 ? "\n" : "");
	cout << '\n';
}

void dfs() {
	if (solve)
		return;
	int y, x;
	if (!findXY(&y, &x)) {
		printBoard();
		solve = true;
		return;
	}
	for (int i = 1; i < LEN + 1; i++) {
		board[y][x] = i;
		if (isValid(y, x))
			dfs();
		board[y][x] = 0;
	}
}

int main() {
	board.resize(LEN, vector<int>(LEN));
	for (int i = 0; i < LEN * LEN; i++) {
		char tmp;	cin >> tmp;
		board[i/LEN][i%LEN] = tmp - '0';
	}
	dfs();
}
