#include <iostream>

// Hàm ki?m tra m?t s? có ph?i là s? nguyên t?
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Cac cap so sinh doi nguyen to:\n";
    for (int i = 2; i < 1000 - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            std::cout << "(" << i << ", " << i + 2 << ")\n";
        }
    }

    return 0;
}

