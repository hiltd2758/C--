#include <iostream>
using namespace std;

int main() {
    int gioStart, gioEnd;
    const int donDau = 30000;
    const double giam = 0.3;
    const double giamTG = 0.1;

    cout << "Nhap gio bat dau (8 <= gioBatDau < gioKetThuc <= 24): ";
    cin >> gioStart;
    cout << "Nhap gio ket thuc: ";
    cin >> gioEnd;

    int soGioThue = gioEnd - gioStart;
    double tien = 0;

    if (soGioThue <= 3) {
        tien = soGioThue * donDau;
    } else {
        tien = 3 * donDau + (soGioThue - 3) * donDau * (1 - giam);
    }

    if (gioStart >= 8 && gioEnd <= 17) {
        tien -= tien * giamTG;
    }

    cout << "So tien khach hang phai tra: " << tien << " dong" << endl;

    return 0;
}

