#include <iostream>
#include <string>
using namespace std;

int main() {
    string ten;
    int diem;

    cout << "Nhap ten cua hoc sinh: ";
    getline(cin, ten);

    do {
        cout << "Nhap diem TB cua hoc sinh : ";
        cin >> diem;
        if (diem < 0 || diem > 10) {
            cout << "Diem nhap khong hop le, hay nhap lai!" << endl;
        }
    } while (diem < 0 || diem > 10);

    cout << "Hoc sinh " << ten << " co diem la " << diem << ", xep loai: ";

    if (diem >= 9.0) {
        cout << "Xuat sac" << endl;
    } else if (diem >= 8.0) {
        cout << " Gioi" << endl;
    } else if (diem >= 7.0) {
        cout << "Kha" << endl;
    } else if (diem >= 5.5) {
        cout << "Trung binh" << endl;
    } else if (diem >= 4.0) {
        cout << "Yeu" << endl;
    } else {
        cout << "Kem" << endl;
    }

    return 0;
}

