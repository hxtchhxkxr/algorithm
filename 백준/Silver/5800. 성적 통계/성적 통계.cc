#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        int score[50];
        for (int j = 0; j < n; j++) {
            cin >> score[j];
        }

        sort(score, score + n);
        int min = score[0];
        int max = score[n - 1];

        int gap = score[1] - score[0];
        for (int j = 1; j < n - 1; j++) { 
            if (score[j + 1] - score[j] > gap)
                gap = score[j + 1] - score[j];
        }

        cout << "Class " << i + 1 << "\n";
        cout << "Max " << max << ", Min " << min << ", Largest gap " << gap << "\n";
    }

    return 0;
}