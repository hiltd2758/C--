#include <iostream>
#include <cctype>

int main() {
    char character;

    while (true) {
        std::cout << "Nhap vao mot chu cai: ";
        std::cin >> character;

        if (std::isalpha(character)) {
            if (std::islower(character)) {
                std::cout << "Day la chu cai thuong.\n";
            } else {
                std::cout << "Day la chu cai in hoa.\n";
            }
            break; // Tho�t kh?i v�ng l?p khi nh?p d�ng
        } else {
            std::cout << "Khong phai chu cai. Hay nhap lai.\n";
        }
    }

    return 0;
}

