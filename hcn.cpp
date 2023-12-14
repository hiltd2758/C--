#include <iostream>
#include <ctime>

int main() {
    // L?y th?i gian hi?n t?i
    std::time_t currentTime = std::time(0);

    // Chuy?n d?i th?i gian thành chu?i
    char* timeString = std::ctime(&currentTime);

    // Hi?n th? th?i gian
    std::cout << "Thoi gian hien tai la: " << timeString;

    return 0;
}

