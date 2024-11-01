#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 1 || n == 3) {
		cout << -1;
		return 0;
	}

	int num;

    switch (n % 10) {
    case 0:
    case 5:
        num = n / 5;
        break;
    case 1:
    case 6:
        num = (n - 6) / 5 + 3;
        break;
    case 2:
    case 7:
        num = (n - 2) / 5 + 1;
        break;
    case 3:
    case 8:
        num = (n - 8) / 5 + 4;
        break;
    case 4:
    case 9:
        num = (n - 4) / 5 + 2;
        break;
    }

    cout << num;
    return 0;
}