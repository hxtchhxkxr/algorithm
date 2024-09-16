#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int c;
	cin >> c;

	float* ratio = new float[c];

	for (int i = 0; i < c; i++) {
		int num;
		cin >> num;

		int* score = new int[num];
		int sum = 0;
		for (int j = 0; j < num; j++) {
			cin >> score[j];
			sum += score[j];
		}
		float avg = static_cast<float>(sum) / num;

		int cnt = 0;
		for (int j = 0; j < num; j++) {
			if (score[j] > avg) {
				cnt++;
			}
		}

		ratio[i] = static_cast<float>(cnt) / num * 100;
		delete[] score;
	}
	
	for (int i = 0; i < c; i++) {
		cout << fixed << setprecision(3) << ratio[i] << "%" << endl;  
	}

	delete[] ratio;
	return 0;
}