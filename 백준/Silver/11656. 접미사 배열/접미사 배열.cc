#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	int len = s.length();
	vector<string> v(len);
	for (int i = 0;i < len;i++) {
		v[i] = s.substr(i, len);
	}
	
	sort(v.begin(), v.end());
	for (int i = 0;i < len;i++) {
		cout << v[i] << '\n';
	}
}