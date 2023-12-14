#include <iostream>
using namespace std;

int main() {
    int dem = 0;
    double tong = 0.0;
    int so;
    cout << "Nhap day so (nhap 9999 de ket thuc):" << endl;
    while (true) {
        cin >> so;

        if (so == 9999) {
            break; 
        }

        tong += so;
        dem+= 1;
    }

    if (dem == 0) {
        cout << "Khong co so nao duoc nhap." << endl;
    } else {
        double TB = tong / dem;
        cout << "Gia tri trung binh cua day so la: " << TB << endl;
    }

    return 0;
}

