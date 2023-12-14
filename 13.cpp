#include <iostream>
using namespace std;

int main() {
    int soDienTieuThu;
    const int dinhMuc1 = 100;
    const int dinhMuc2 = 150;
    const int dinhMuc3 = 200;
    const int dinhMuc4 = 300;
    const int giaDinhMuc1 = 550;
    const int giaDinhMuc2 = 900;
    const int giaDinhMuc3 = 1250;
    const int giaDinhMuc4 = 1450;
    const int giaTrenDinhMuc4 = 1700;
    int soTien;

    cout << "Nhap vao so dien tieu thu (kWh) trong thang: ";
    cin >> soDienTieuThu;

    if (soDienTieuThu <= dinhMuc1) {
        soTien = soDienTieuThu * giaDinhMuc1;
    } else if (soDienTieuThu <= dinhMuc2) {
        soTien = giaDinhMuc1 + (soDienTieuThu - dinhMuc1) * giaDinhMuc2;
    } else if (soDienTieuThu <= dinhMuc3) {
        soTien = giaDinhMuc1 + giaDinhMuc2 + (soDienTieuThu - dinhMuc2) * giaDinhMuc3;
    } else if (soDienTieuThu <= dinhMuc4) {
        soTien = giaDinhMuc1 + giaDinhMuc2 + giaDinhMuc3 + (soDienTieuThu - dinhMuc3) * giaDinhMuc4;
    } else {
        soTien = giaDinhMuc1 + giaDinhMuc2 + giaDinhMuc3 + giaDinhMuc4 + (soDienTieuThu - dinhMuc4) * giaTrenDinhMuc4;
    }

    double thue = soTien * 0.1;
    soTien += thue;

    cout << "So tien phai tra cho thang nay la: " << soTien << " VND" << endl;

    return 0;
}


/*
#include <iostream>
using namespace std;

int main() {
    int soDienTieuThu;
    const int dinhMuc[] = {100, 150, 200, 300};
    const int giaDinhMuc[] = {550, 900, 1250, 1450, 1700};
    int soTien = 0;

    cout << "Nhap vao so dien tieu thu (kWh) trong thang: ";
    cin >> soDienTieuThu;
	int n= sizeof(dinhMuc) / sizeof(dinhMuc[0]) ;
    for (int i = 0; i < sizeof(dinhMuc) / sizeof(dinhMuc[0]); ++i) {
        if (soDienTieuThu <= dinhMuc[i]) {
            soTien += soDienTieuThu * giaDinhMuc[i];
            break;
        } else {
            soTien += dinhMuc[i] * giaDinhMuc[i];
            soDienTieuThu -= dinhMuc[i];
        }
    }

    cout << "So tien phai tra cho thang nay la: " << soTien << " VND" << endl;

    return 0;
}
*/
