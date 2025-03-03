#include <iostream>
using namespace std;

int main() {
	int d[12] = { 0 };

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	for (int i = 4;i <= 11;i++) {
		d[i] = d[i - 3] + d[i - 2] + d[i - 1];
	}

	int n;
	cin >> n;

	int arr[1000];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	for (int i = 0;i < n;i++) {
		cout << d[arr[i]] << '\n';
	}
}