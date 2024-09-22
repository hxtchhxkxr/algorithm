#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int* arrA = new int[n];
	int* arrB = new int[m];

	for (int i = 0; i < n; i++) 
		cin >> arrA[i];

	for (int i = 0; i < m; i++) 
		cin >> arrB[i];

	int* result = new int[n + m];
	copy(arrA, arrA + n, result);
	copy(arrB, arrB + m, result + n);
	sort(result, result + n + m);

	for (int i = 0; i < n + m; i++) 
		cout << result[i] << " ";

	delete[] arrA;
	delete[] arrB;
	delete[] result;

	return 0;
}