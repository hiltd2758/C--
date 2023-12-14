#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;

    do {
        cout << "Nhap so nguyen duong: ";
        cin >> number;

        if (number <= 0) {
            cout << "So nhap vao phai la nguyen duong, hay nhap lai" << endl;
        }

    } while (number <= 0);

    cout << "Thua so nguyen to cua " << number << " la: ";

    while (number % 2 == 0) {
        cout << 2 << " ";
        number = number / 2;
    }

    for (int i = 3; i <= sqrt(number); i = i + 2) {
        while (number % i == 0) {
            cout << i << " ";
            number = number / i;
        }
    }

    if (number > 2) {
        cout << number << " ";
    }

    cout << endl;

    return 0;
}
n
