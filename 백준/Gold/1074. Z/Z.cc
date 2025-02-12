#include <iostream>
using namespace std;

int visit(int n, int r, int c) {
	// base conditon
	if (r == 0 && c == 0) return 0;

	// recursion
	int val = (1 << (n - 1)) * (1 << (n - 1));
	if ((r >= 0 && r < (1 << n - 1)) && (c >= 0 && c < (1 << n - 1))) {
		return visit(n - 1, r, c);
	}
	else if ((r >= 0 && r < (1 << n - 1)) && (c >= (1 << n - 1) && c < (1 << n))) {
		return visit(n - 1, r, c - (1 << n - 1)) + val;
	}
	else if ((r >= (1 << n - 1) && r < (1 << n)) && (c >= 0 && c < (1 << n - 1))) {
		return visit(n - 1, r - (1 << n - 1), c) + 2 * val;
	}
	else if ((r >= (1 << n - 1) && r < (1 << n)) && (c >= (1 << n - 1) && c < (1 << n))) {
		return visit(n - 1, r - (1 << n - 1), c - (1 << n - 1)) + 3 * val;
	}
}

int main() {
	int n, r, c;
	cin >> n >> r >> c;
	cout << visit(n, r, c);
}