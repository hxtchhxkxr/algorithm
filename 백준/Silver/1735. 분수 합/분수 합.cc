#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int num1, denom1;	
	int num2, denom2;

	cin >> num1 >> denom1;
	cin >> num2 >> denom2;

	int resultNum = num1 * denom2 + num2 * denom1;
	int resultDenom = denom1 * denom2;

	int num = gcd(resultNum, resultDenom);
	cout << resultNum / num << ' ' << resultDenom / num;
}