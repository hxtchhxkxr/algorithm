#include <iostream>
using namespace std;

int main() {
	// 체스판 입력받기

	int n, m;
	cin >> n >> m;

	char userBoard[50][50];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> userBoard[i][j];
		}
	}

	// 입력받은 체스판과 비교할 두 가지 체스판 만들기

	char board1[50][50];	// WBWBWB...

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if ((i + j) % 2 == 0) {
				board1[i][j] = 'W';
			}
			else {
				board1[i][j] = 'B';
			}
		}
	}

	char board2[50][50];	// BWBWBW...

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if ((i + j) % 2 == 0) {
				board2[i][j] = 'B';
			}
			else {
				board2[i][j] = 'W';
			}
		}
	}

	// 입력받은 체스판과 다른 문자가 어디에 있는지 나타내는 체스판 만들기

	int compare1[50][50] = { 0 };	// board1과 비교

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (userBoard[i][j] != board1[i][j]) {
				compare1[i][j] = 1;
			}
		}
	}

	int compare2[50][50] = { 0 };	// board2과 비교

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (userBoard[i][j] != board2[i][j]) {
				compare2[i][j] = 1;
			}
		}
	}

	// 8 * 8 배열 안에서 1 개수 몇개인지 세기

	int cnt1 = 64;	// cnt1의 최댓값

	for (int i = 0; i <= n - 8; i++) {

		for (int j = 0; j <= m - 8; j++) {
			int temp = 0; // temp를 각 시작점에서 초기화

			// 8x8 영역 검사
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (compare1[i + k][j + l] == 1) {
						temp++;
					}
				}
			}

			if (cnt1 > temp) {
				cnt1 = temp;
			}
		}
	}
	

	int cnt2 = 64;

	for (int i = 0; i <= n - 8; i++) {

		for (int j = 0; j <= m - 8; j++) {
			int temp = 0; // temp를 각 시작점에서 초기화

			// 8x8 영역 검사
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (compare2[i + k][j + l] == 1) {
						temp++;
					}
				}
			}

			if (cnt2 > temp) {
				cnt2 = temp;
			}
		}
	
	}

	// cnt1과 cnt2중 작은 것 출력하기

	if (cnt1 > cnt2) {
		cout << cnt2;
	}
	else {
		cout << cnt1;
	}

	return 0;
}