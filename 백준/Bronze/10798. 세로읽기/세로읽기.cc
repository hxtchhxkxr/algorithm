#include <iostream>
using namespace std;

int main() {
	char arr[5][15];

	for (int i = 0; i < 5; i++) {
		string line;
		cin >> line;

		for (int j = 0; j < 15; j++) {
			if (j < line.size()) {
				arr[i][j] = line[j]; 
			}
			else {
				arr[i][j] = '\0'; 
			}
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] != '\0') {
				cout << arr[j][i];
			}
		}
	}

	return 0;
}