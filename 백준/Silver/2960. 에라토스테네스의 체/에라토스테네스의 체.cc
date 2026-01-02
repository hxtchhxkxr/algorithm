#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int arr[1001];

	for (int i = 2; i <= n; i++) {
		arr[i] = i;
	}

	int idx = 1;	
	int primeNum, eraseNum;

	while (true) {
		for (int i = 2; i <= n; i++) {
			if (arr[i] != 0) {
				primeNum = i;
				break;
			}
		}

		int mul = 1;

		while(true) {
			eraseNum = primeNum * mul;
			mul++;

			if (eraseNum > n)break;
			if (arr[eraseNum] == 0)continue;

			arr[eraseNum] = 0;

			if (idx == k) {
				cout << eraseNum;
				return 0;
			}

			idx++;
		}
	}
}