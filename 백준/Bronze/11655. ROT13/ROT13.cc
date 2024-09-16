#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		int ascii = str[i];
		if (ascii >= 65 && ascii <= 90) {
			if (ascii + 13 > 90) {
				ascii -= 13;
				cout << char(ascii);
			}
			else {
				ascii += 13;
				cout << char(ascii);
			}

		}
		else if (ascii >= 97 && ascii <= 122) {
			if (ascii + 13 > 122) {
				ascii -= 13;
				cout << char(ascii);
			}
			else {
				ascii += 13;
				cout << char(ascii);
			}
		}
		else {
			cout << str[i];
		}
	}

	return 0;
}