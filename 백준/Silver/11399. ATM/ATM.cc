#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* withdrawTime = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> withdrawTime[i];
	}
	sort(withdrawTime, withdrawTime + n);

	int* prefixSum = new int[n];
	prefixSum[0] = withdrawTime[0];

	int totalSum = prefixSum[0];

	for (int i = 1; i < n; i++) {
		prefixSum[i] = prefixSum[i - 1] + withdrawTime[i];
		totalSum += prefixSum[i];
	}
	cout << totalSum;

	delete[] withdrawTime;
	delete[] prefixSum;

	return 0;
}