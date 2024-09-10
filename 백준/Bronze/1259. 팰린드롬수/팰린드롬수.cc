#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	while (str != "0") {
		cin >> str;
		string buf = str;
		reverse(str.begin(),str.end());
		if (str != "0") {
			if (str == buf)
				cout << "yes\n";
			else
				cout << "no\n";
		}
	}
	return 0;
}