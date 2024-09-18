#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, b;
	cin >> n >> b;

	int num;
	string str;
	while (n != 0) {
		num = n % b;
		n /= b;
		if (0 <= num && num < 10) {
			str.append(to_string(num));
		}
		else {
			char ascii = num - 10 + 'A';
			str.append(1, ascii);
		}
	}
	reverse(str.begin(), str.end());
	cout << str;
	return 0;
}