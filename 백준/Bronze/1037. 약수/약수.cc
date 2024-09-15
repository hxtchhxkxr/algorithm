#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << min * max << std::endl;
    return 0;
}