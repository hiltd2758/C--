#include <iostream>
using namespace std;
int UCLN(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
int BCNN(int a, int b) {
    int tempA = a;
    int tempB = b;

    while (a != b) {
        if (a > b) {
            b += tempB;
        } else {
            a += tempA;
        }
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Nhap hai so nguyen: ";
    cin >> num1 >> num2;

    int ucln = UCLN(num1, num2);
    int bcnn = BCNN(num1, num2);

    cout << "Uoc chung lon nhat cua " << num1 << " va " << num2 << " la: " << ucln << std::endl;
    cout << "Boi chung nho nhat cua " << num1 << " va " << num2 << " la: " << bcnn << std::endl;

    return 0;
}

