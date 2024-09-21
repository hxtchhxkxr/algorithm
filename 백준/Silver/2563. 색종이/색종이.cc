#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int x, y;
	int cnt = 0;

	int arr[100][100] = { 0 };
	while (n--) {
		cin >> x >> y;
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++){
				if (!arr[i][j]) {
					cnt++;
					arr[i][j] = 1;
				}
			}
		}
	}

	cout << cnt;
	return 0;
}