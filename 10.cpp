#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    if (a != 0) {
        if (a > 0) {
            cout << "Nghiem: x > " << -b/a << endl;
        } else {
            cout << "Nghiem: x < " << -b/a << endl;
        }
    } else {
        cout << "Loi." << endl;
    }

    return 0;
}

