#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int arr[100001] = { 0 };
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0;i < k;i++) {
		sum += arr[i];
	}

	int start = 0;
	int end = k;
	int max = sum;

	for (int i = 0;i < n - k;i++) {
		sum = sum - arr[start] + arr[end];
		start++;
		end++;

		if (sum > max) {
			max = sum;
		}
	}

	cout << max;
}