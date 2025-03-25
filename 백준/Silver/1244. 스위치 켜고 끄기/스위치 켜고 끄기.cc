#include <iostream>
using namespace std;

int main() {
	int cntOfSwitch;
	cin >> cntOfSwitch;

	int switchState[101];
	for (int i = 1; i <= cntOfSwitch; i++) {
		cin >> switchState[i];
	}

	int cntOfStudent;
	cin >> cntOfStudent;

	while (cntOfStudent--) {
		int gender, num;
		cin >> gender >> num;

		switch (gender) {
		case 1:
			for (int i = 1; i <= cntOfSwitch; i++) {
				if (i % num == 0) {
					switchState[i] = 1 - switchState[i];
				}
			}
			break;
		case 2:
			switchState[num] = 1 - switchState[num];  
			int n = 1;  
			while (num - n >= 0 && num + n <= cntOfSwitch && switchState[num - n] == switchState[num + n]) {
				switchState[num - n] = 1 - switchState[num - n];
				switchState[num + n] = 1 - switchState[num + n];
				n++;
			}
			break;
		}
	}

	for (int i = 1; i <= cntOfSwitch; i++) {
		cout << switchState[i] << ' ';
		if (i % 20 == 0) cout << '\n';
	}
}