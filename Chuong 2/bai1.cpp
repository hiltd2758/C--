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
            break; // Thoát kh?i vòng l?p khi nh?p dúng
        } else {
            std::cout << "Khong phai chu cai. Hay nhap lai.\n";
        }
    }

    return 0;
}

