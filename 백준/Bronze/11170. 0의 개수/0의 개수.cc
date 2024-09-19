#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int n, m;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		int cnt = 0;
		for (int j = n; j <= m; j++) {
			if (j == 0) {
				cnt++;
			}

			int temp = j; 
			while (temp != 0) {
				if (temp % 10 == 0) {
					cnt++;
				}
				temp /= 10;
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}