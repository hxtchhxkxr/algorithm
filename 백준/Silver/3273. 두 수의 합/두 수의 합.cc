#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[100001];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;

	sort(arr, arr + n);

	int left = 0;
	int right = n - 1;

	int sum;
	int cnt = 0;

	while (left < right) {
		sum = arr[left] + arr[right];
		if (sum < x) {
			left++;
		}
		else if (sum == x) {
			left++;
			right--;
			cnt++;
		}
		else {
			right--;
		}
	}

	cout << cnt;
}