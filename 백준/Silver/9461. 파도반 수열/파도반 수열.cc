#include <iostream>
using namespace std;

long long p[102];

int main() {
	p[1] = 1;
	p[2] = 1;
	p[3] = 1;
	p[4] = p[1] + p[3];
	p[5] = p[4];

	for (int i = 6;i <= 100;i++) {
		p[i] = p[i - 5] + p[i - 1];
	}

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		cout << p[n] << '\n';
	}
}