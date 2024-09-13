#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;

	for (int i = 1; i <= n; i++) {
		int num = i;
		while (num % 5 == 0 && num > 0) {
			num /= 5;
			count++;
		}
	}

	cout << count;
	return 0;
}