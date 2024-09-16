#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int num = 1;
	for (int i = n; i > n - 4; i--) {
		num *= i;
	}

	cout << num / 24;

	return 0;
}