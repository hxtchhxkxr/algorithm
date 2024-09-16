#include <iostream>
using namespace std;

int main() {
	int l, p, v;
	int count = 1;

	while (true) {
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0)
			break;

		int max = 0;
		max += (v / p) * l;
		if (l < v % p) {
			max += l;
		}
		else {
			max += v % p;
		}

		cout << "Case " << count << ": " << max << "\n";
		count++;
	}

	return 0;
}