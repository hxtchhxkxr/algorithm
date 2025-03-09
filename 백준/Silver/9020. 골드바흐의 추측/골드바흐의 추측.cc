#include <iostream>
using namespace std;

bool isPrimeNum(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if ((n % i == 0) && (n != 2)) {
			return false;
			break;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;

	int n;
	while (t--) {
		cin >> n;
		int leftNum = n / 2;
		int rightNum = n / 2;

		while (leftNum > 1) {
			if (isPrimeNum(leftNum) && isPrimeNum(rightNum)) {
				break;
			}

			leftNum--;
			rightNum++;
		}

		cout << leftNum << ' ' << rightNum << '\n';
	}
}