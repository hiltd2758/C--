#include <iostream>
#include <cmath>
using namespace std;
// Ki?m tra s? nguyên t?
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Ki?m tra s? chính phuong
bool isPerfectSquare(int n) {
    int squareRoot = sqrt(n);
    return (squareRoot * squareRoot == n);
}

// Ki?m tra s? hoàn ch?nh
bool isPerfectNumber(int n) {
    if (n <= 1) {
        return false;
    }

    int sum = 1; // 1 là u?c s? d?u tiên c?a m?i s?
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return (sum == n);
}

// Ki?m tra s? d?i x?ng
bool isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return (reversed == original);
}

// Tìm ch? s? l?n nh?t
int findLargestDigit(int n) {
    int largest = 0;
    while (n > 0) {
        int digit = n % 10;
        largest = std::max(largest, digit);
        n /= 10;
    }
    return largest;
}

// Tính t?ng các ch? s? l?
int sumOfOddDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

// Ki?m tra toàn b? s? ch?n
bool allEvenDigits(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}

// Ki?m tra th? t? tang/gi?m c?a các ch? s?
std::string checkDigitOrder(int n) {
    bool increasing = true, decreasing = true;
    int previousDigit = n % 10;
    n /= 10;

    while (n > 0) {
        int digit = n % 10;
        if (digit > previousDigit) {
            decreasing = false;
        } else if (digit < previousDigit) {
            increasing = false;
        }

        previousDigit = digit;
        n /= 10;
    }

    if (increasing) {
        return "Tang dan";
    } else if (decreasing) {
        return "Giam dan";
    } else {
        return "Khong tang, khong giam" ;
    }
}

int main() {
    int number;

    do {
        std::cout << "Nhap vao mot so nguyen  duong: ";
        std::cin >> number;
        if ( number < 0 ) {
		   cout << "So nhap vao phai la so nguyen duong ( >= 0 )";
		}
    } while (number <= 0);

    std::cout << number << (isPerfectSquare(number) ? " la so chinh phuong.\n" : " không phai là so chinh phuong.\n");
    std::cout << number << (isPrime(number) ? " la so nguyen to.\n" : " khong phai la so nguyen to.\n");
    std::cout << number << (isPerfectNumber(number) ? " la so hoan chinh.\n" : " khong phai la so hoan chinh.\n");
    std::cout << number << (isPalindrome(number) ? " la so doi xung.\n" : " khong phai la so doi xung.\n");

    std::cout << "Chu so lon nhat trong " << number << " la: " << findLargestDigit(number) << "\n";
    std::cout << "Tong cac chu so le trong " << number << " la: " << sumOfOddDigits(number) << "\n";
    std::cout << number << (allEvenDigits(number) ? " toan chu so chan.\n" : " khong phai toan so chan.\n");

    std::cout << "Cac chu so trong " << number << " " << checkDigitOrder(number) << "\n";

    return 0;
}

