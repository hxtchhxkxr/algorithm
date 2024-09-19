#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int score[8];
	int sortedScore[8];

	for (int i = 0; i < 8; i++) {
		cin >> score[i];
		sortedScore[i] = score[i];
	}

	sort(sortedScore, sortedScore + 8);
	reverse(sortedScore, sortedScore + 8);
	
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += sortedScore[i];
	}
	cout << sum << "\n";

	int scoreNum[5];
	int idx = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			if (sortedScore[i] == score[j]) {
				scoreNum[idx] = j + 1;
				idx++;
			}
		}
	}

	sort(scoreNum, scoreNum + 5);
	for (int i = 0; i < 5; i++) {
		cout << scoreNum[i] << " ";
	}
		
	return 0;
}