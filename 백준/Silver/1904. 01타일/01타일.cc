#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[1000002] = { 0 };

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 2] + arr[i - 1]) % 15746;
	}

	cout << arr[n];
}