#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int cnt[26] = { 0 };
	
	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
		cnt[str[i] - 'A']++;
	}

	int max = -1; 
	char maxChar = '?';
	bool isMaxUnique = true;

	for (int i = 0; i < 26; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			maxChar = i + 'A';
			isMaxUnique = true;
		}
		else if (cnt[i] == max) {
			isMaxUnique = false;
		}
	}

	if (isMaxUnique) 
		cout << maxChar;
	else 
		cout << '?';

	return 0;
}