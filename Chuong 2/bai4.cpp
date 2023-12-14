#include <iostream>

int main() {
    // Nh?p 3 s? nguyên duong a, b, n
    int a, b, n;
    do {
        std::cout << "Nhap a (a < n): ";
        std::cin >> a;

        std::cout << "Nhap b (b < n): ";
        std::cin >> b;

        std::cout << "Nhap n: ";
        std::cin >> n;
    } while (a >= n || b >= n);

    
    std::cout << "Cac cap so thoa man dieu kien:\n";
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((i + j) % a == 0 && (i + j) % b != 0) {
                std::cout << "(" << i << ", " << j << ")\n";
            }
        }
    }

    return 0;
}

