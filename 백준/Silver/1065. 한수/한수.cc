#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n <= 99) {
		cout << n;
	}
	else {
		int cnt = 99;
		for (int i = 100; i <= n; i++) {
			int hundreds = i / 100;
			int tens = (i / 10) % 10;
			int ones = i % 10;

			if ((hundreds - tens) == (tens - ones)) {
				cnt++;
			}
		}
		cout << cnt;
	}

	return 0;
}