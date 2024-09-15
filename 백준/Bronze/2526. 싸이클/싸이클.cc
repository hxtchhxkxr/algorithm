#include <iostream>
using namespace std;

int main() {
	int n, p;
	cin >> n >> p;

	int mod = n;
	int cycle[97];
	int count;

	for (int i = 0; i < 97; i++) {
		mod = (mod * n) % p;
		cycle[i] = mod;
	}

	for (int i = 0; i < 97; i++) {
		for (int j = i+1; j < 97; j++) {
			if (cycle[i] == cycle[j]) {
				count = j-i;
			}
		}
	}

	cout << count;

	return 0;
}