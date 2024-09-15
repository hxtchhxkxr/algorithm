#include <iostream>
using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;
	int year;

	for (int i = 1; i <= 7980; i++) {
		if ((i - e) % 15 == 0 && (i - s) % 28 == 0 && (i - m) % 19 == 0)
			year = i;
	}

	cout << year;

	return 0;
}