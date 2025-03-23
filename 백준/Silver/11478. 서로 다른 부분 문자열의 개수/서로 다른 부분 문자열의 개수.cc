#include <iostream>
#include <set>
using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.length();

	set<string> set;
	for (int i = 0;i < len;i++) {
		for (int j = i;j < len;j++) {
			set.insert(str.substr(i, j - i + 1));
		}
	}

	cout << set.size();
}