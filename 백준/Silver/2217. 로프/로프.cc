#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int rope[100000];
	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}

	sort(rope, rope + n);

	int weight[100000] = { 0 };
	for (int i = 0; i < n; i++) {
		weight[i] = rope[i] * (n - i);
	}

	sort(weight, weight + n);
	cout << weight[n - 1];

	return 0;
}