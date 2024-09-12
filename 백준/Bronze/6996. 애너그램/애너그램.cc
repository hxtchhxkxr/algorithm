#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		string str1, str2;
		cin >> str1 >> str2;

		string tempStr1 = str1;
		string tempStr2 = str2;

		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());

		if (str1 == str2)
			cout << tempStr1 << " & " << tempStr2 << " are anagrams.\n";
		else
			cout << tempStr1 << " & " << tempStr2 << " are NOT anagrams.\n";
	}

	return 0;
}