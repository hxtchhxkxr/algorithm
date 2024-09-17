#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	set<int> s(arr, arr + n);
	for (const int& element : s) {
        cout << element << " ";
    }

	delete[] arr;
	return 0;
}