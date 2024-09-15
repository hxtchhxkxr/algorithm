#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int* west = new int[t];
	int* east = new int[t];

	for (int i = 0; i < t; i++)
		cin >> west[i] >> east[i];

	for (int i = 0; i < t; i++) {
		int w = west[i];
		int e = east[i];

		long long result = 1;

		for (int j = 0; j < w; j++) {
			result *= (e - j);
			result /= (j + 1);
		}

		cout << result << "\n";
	}

	delete[] west;
	delete[] east;
	return 0;
}