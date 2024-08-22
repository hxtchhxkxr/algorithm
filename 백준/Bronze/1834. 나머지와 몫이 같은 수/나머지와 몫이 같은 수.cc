#include <iostream>

int main() {
    long long N;
    std::cin >> N;  
    std::cout << ((N - 1) * N * (N + 1)) / 2 << std::endl;
}
