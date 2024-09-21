#include <iostream>
using namespace std;

int Fibonacci(int n) {
	int* fib = new int[n + 2];
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	return fib[n];
}

int main() {
	int k;
	cin >> k;

	int cnt = Fibonacci(k);

	cout << Fibonacci(k-1) << " " << Fibonacci(k);

	return 0;
}