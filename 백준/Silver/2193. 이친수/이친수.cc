#include <iostream>
using namespace std;

long last0[92];
long last1[92];
long pinaryNumber[92];

int main() {
	last0[1] = 0;
	last1[1] = 1;
	pinaryNumber[1] = 1;

	for (int i = 1; i < 90; i++) {
		last0[i + 1] = last0[i] + last1[i];
		last1[i + 1] = last0[i];
		pinaryNumber[i + 1] = last0[i + 1] + last1[i + 1];
	}

	int n;
	cin >> n;
	cout << pinaryNumber[n];
}