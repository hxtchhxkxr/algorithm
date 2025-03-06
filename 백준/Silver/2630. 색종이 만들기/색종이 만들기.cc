#include <iostream>
using namespace std;

int paper[129][129];
int white = 0;
int blue = 0;

void func(int x, int y, int n) {
	int status = paper[x][y];	
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (paper[i][j] != status) {
				status = 2;
				break;
			}
		}
	}

	// status = 0 : 흰색
	// status = 1 : 파란색
	// status = 2 : 섞여있음

	switch (status) {
	case 0:
		white++;
		break;
	case 1:
		blue++;
		break;
	case 2:
		func(x, y, n / 2);
		func(x + n / 2, y, n / 2);
		func(x, y + n / 2, n / 2);
		func(x + n / 2, y + n / 2, n / 2);
		break;
	}

	return;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	func(0, 0, N);
	cout << white << '\n' << blue;
}