#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* arr1 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	int m;
	cin >> m;

	int* arr2 = new int[m];
	int* arr3 = new int[m];

	unordered_set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr1[i]);
	}

	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
		arr3[i] = s.count(arr2[i]) ? 1 : 0;  
	}

	for (int i = 0; i < m; i++)
		cout << arr3[i] << " ";

	delete[] arr1;
	delete[] arr2;
	delete[] arr3;

	return 0;
}