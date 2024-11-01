#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 1 || n == 2 || n == 4 || n == 7) {
		cout << -1;
		return 0;
	}

	switch (n % 10) {
	case 0:
	case 5:
		cout << n / 5;
		break;
	case 1:
	case 6:
		cout << (n - 6) / 5 + 2;
		break;
	case 2:
	case 7:
		cout << (n - 12) / 5 + 4;
		break;
	case 3:
	case 8:
		cout << (n - 3) / 5 + 1;
		break;
	case 4:
	case 9:
		cout << (n - 9) / 5 + 3;
		break;
	}

	return 0;
}