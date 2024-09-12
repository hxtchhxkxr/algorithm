#include <iostream>
#include <string>;

using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();
	char* arr = new char[len + 1];
	str.copy(arr, len + 1);
	arr[len] = '\0';

	int count = 0;
	char temp = arr[0];
	for (int i = 0; i < len; i++) {
		if (arr[i] != temp) {
			temp = arr[i];
			count += 1;
		}
	}

	if (count % 2 == 0)
		cout << count / 2;
	else
		cout << (count + 1) / 2;

	return 0;
}