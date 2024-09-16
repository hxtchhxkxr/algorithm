#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string FileName;
	string pattern;
	
	cin >> FileName;
	pattern = FileName;

	for (int i = 0; i < n - 1; i++) {
		cin >> FileName;
		for (int j = 0; j < FileName.size(); j++) {
			if (FileName[j] != pattern[j]) {
				pattern[j] = '?';
			}
		}
	}

	cout << pattern;

	return 0;
}