#include <iostream>
#include <string>
using namespace std;

int main() {
	string text, word;

	getline(cin, text);
	getline(cin, word);

	int cnt = 0;
	while (text.find(word) != string::npos) {
		text.replace(text.find(word), word.size(), "0");
		cnt++;
	}
	cout << cnt;

	return 0;
}