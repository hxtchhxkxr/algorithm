#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	do {
		cin >> n;
		if (n == -1)
			break;
		int sum = 0;
		string str;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				str.append(to_string(i) + " + ");
			}
		}

		if (sum == n) {
			str.erase(str.size() - 3, 3);
			cout << n << " = " << str << "\n";
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
	} while (n != -1);
	return 0;
}