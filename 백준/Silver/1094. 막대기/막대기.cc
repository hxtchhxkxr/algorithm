#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int n = 64;
	int count = 0;

	while (x != 0) {
		while (x < n) {
			n /= 2;
		}
		x -= n;
		count++;
	}

	cout << count;
	return 0;
}