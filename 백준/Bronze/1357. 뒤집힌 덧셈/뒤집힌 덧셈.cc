#include <iostream>

int Rev(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int X, Y;
    std::cin >> X >> Y;

    std::cout << Rev(Rev(X) + Rev(Y)) << std::endl;
    return 0;
}