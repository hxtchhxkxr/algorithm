#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		bool isGroupWord = true;
		bool visited[26] = { false };
		char lastChar = str[0];
		visited[lastChar - 'a'] = true;

		for (int j = 1; j < str.size(); j++) {
			if (str[j] != lastChar) {
				if (visited[str[j] - 'a']) {
					isGroupWord = false;
					break;
				}
				visited[str[j] - 'a'] = true;
				lastChar = str[j];
			}
		}

		if (isGroupWord) {
			count++;
		}
	}

	cout << count;
	return 0;
}