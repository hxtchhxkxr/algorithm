#include <iostream>
using namespace std;

int bingoCount(bool arr[5][5]) {
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		if (arr[i][0] && arr[i][1] && arr[i][2] && arr[i][3] && arr[i][4])cnt++;
		if (arr[0][i] && arr[1][i] && arr[2][i] && arr[3][i] && arr[4][i])cnt++;
	}

	if (arr[0][0] && arr[1][1] && arr[2][2] && arr[3][3] && arr[4][4])cnt++;
	if (arr[0][4] && arr[1][3] && arr[2][2] && arr[3][1] && arr[4][0])cnt++;

	return cnt;
}

int main() {
	int inputBingo[5][5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> inputBingo[i][j];
		}
	}

	bool checkBingo[5][5] = { false };

	int result = 0;

	for (int i = 1; i <= 25; i++) {
		int num;
		cin >> num;

		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				if (num == inputBingo[j][k]) {
					checkBingo[j][k] = true;
				}
			}
		}

		if (result != 0) {
			continue;
		}

		if (bingoCount(checkBingo) >= 3) {
			result = i;
		}
	}

	cout << result;
}