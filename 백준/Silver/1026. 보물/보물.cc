#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int A[50];
	int B[50];

	for (int i = 0; i < n; i++) 
		cin >> A[i];
	for (int i = 0; i < n; i++)
		cin >> B[i];

	sort(A, A + n);
	sort(B, B + n);
	reverse(B, B + n);

	int result = 0;
	for (int i = 0; i < n; i++) 
		result += A[i] * B[i];

	cout << result;
	
	return 0;
}