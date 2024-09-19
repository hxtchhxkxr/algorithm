#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = -1;
	}

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		int cowNum, cowLocation;
		cin >> cowNum >> cowLocation;

		if (arr[cowNum - 1] == -1) {
			arr[cowNum - 1] = cowLocation;
		}
		else {
			if (arr[cowNum - 1] != cowLocation) {
				cnt++;
				arr[cowNum - 1] = cowLocation;
			}
		}
	}
	
	cout << cnt;

	return 0;
}