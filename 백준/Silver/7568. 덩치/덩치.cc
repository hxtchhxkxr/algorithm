#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* weight = new int[n];
	int* height = new int[n];

	for (int i = 0; i < n; i++) 
		cin >> weight[i] >> height[i];

	int* score = new int[n];

	for (int i = 0; i < n; i++) {
		int benchWeight = weight[i];
		int benchHeight = height[i];
		int count = 1;

		for (int j = 0; j < n; j++) {
			if (benchWeight < weight[j] && benchHeight < height[j]) {
				count++;
			}
		}
		score[i] = count;
	}

	for (int i = 0; i < n; i++) {
		cout << score[i] << " ";
	}

	delete[] weight;
	delete[] height;
	delete[] score;

	return 0;
}