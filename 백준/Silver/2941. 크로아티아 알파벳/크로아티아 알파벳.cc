#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;

	int i = 0;
	int count = 0;

	while (i < str.size()) {
		switch (str[i])
		{
		case 'c':
			if (str[i + 1] == '=') {
				count++;
				i += 2;
			}
			else if (str[i + 1] == '-') {
				count++;
				i += 2;
			}
			else {
				count++;
				i++;
			}
			break;
		case 'd':
			if (str[i + 1] == 'z' && str[i + 2] == '=') {
				count++;
				i += 3;
			}
			else if (str[i + 1] == '-') {
				count++;
				i += 2;
			}
			else {
				count++;
				i++;
			}
			break;
		case 'l':
			if (str[i + 1] == 'j') {
				count++;
				i += 2;
			}
			else {
				count++;
				i++;
			}
			break;
		case 'n':
			if (str[i + 1] == 'j') {
				count++;
				i += 2;
			}
			else {
				count++;
				i++;
			}
			break;
		case 's':
			if (str[i + 1] == '=') {
				count++;
				i += 2;
			}
			else {
				count++;
				i++;
			}
			break;
		case 'z':
			if (str[i + 1] == '=') {
				count++;
				i += 2;
			}
			else {
				count++;
				i++;
			}
			break;
		default:
			count++;
			i++;
			break;
		}
		
	}

	cout << count;

	return 0;
}