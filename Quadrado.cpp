#include <iostream>

void calculateSquare(int n, int original) {
    if (n == 1) {
        std::cout << n << "^2 = 1" << std::endl;
        return;
    }

    if (n == original) {
        std::cout << n << "^2 = ";
    } else {
        std::cout << n << "^2 = " << original << "^2 + 2*" << original << " + 1 = ";
    }

    std::cout << n * n << std::endl;
    calculateSquare(n - 1, original);
}

int main() {
    int n;
    std::cin >> n;
    calculateSquare(n, n);
    return 0;
}
