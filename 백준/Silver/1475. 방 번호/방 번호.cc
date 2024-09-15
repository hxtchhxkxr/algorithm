#include <iostream>
using namespace std;

int main() {
	string num;
	cin >> num;

	int count[11] = { 0 };
	for (char digit : num)
		count[digit - '0']++;

	if ((count[6] + count[9]) % 2 == 0)
		count[10] = (count[6] + count[9]) / 2;
	else
		count[10] = (count[6] + count[9]) / 2 + 1;

	count[6] = 0;
	count[9] = 0;

	int max = count[0];
	for (int i = 0; i < 11; i++) {
		if (max < count[i])
			max = count[i];
	}

	cout << max;
}