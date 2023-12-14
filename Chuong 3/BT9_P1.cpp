#include <iostream>
using namespace std;

double tinhDaThuc(double heSo[], int bac, double x) {
    double ketQua = 0.0;
    double luyThuaX = 1.0;
    for (int i = 0; i <= bac; i++) {
        ketQua += heSo[i] * luyThuaX;
        luyThuaX *= x;
    }
    return ketQua;
}

int main() {
    int bac;
    cout << "Nhap bac cua da thuc: ";
    cin >> bac;
    double heSo[bac + 1];
    for (int i = 0; i <= bac; i++) {
        cout << "Nhap he so a[" << i << "]: ";
        cin >> heSo[i];
    }
    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;
    double ketQua = tinhDaThuc(heSo, bac, x);
    cout << "Gia tri cua da thuc tai x = " << x << " la: " << ketQua << endl;
    return 0;
}

