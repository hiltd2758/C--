#include <iostream>
using namespace std;
int main() {
    int n;

    do {
        cout << "Nhap mot so nguyen duong n: ";
        cin >> n;

        if (n <= 0) {
            cout << "Khong hop le! Hay nhap lai voi mot so nguyen duong.\n";
            cin.clear();
            cin.ignore(100, '\n');
        }

    } while (n <= 0);

    cout << "Cac uoc so cua " << n << " la:\n";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}

