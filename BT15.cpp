#include <iostream>
#include <cmath>

using namespace std;

const int SO_DIEM_TOI_DA = 10;

int main() {
    int so_diem;
    do {
        cout << "Nhap so diem cua da giac: ";
        cin >> so_diem;

        if (so_diem < 3 || so_diem > SO_DIEM_TOI_DA) {
            cout << "Nhap sai! So diem phai tu 3 den 10. Vui long nhap lai." << endl;
        }
    } while (so_diem < 3 || so_diem > SO_DIEM_TOI_DA);

    float da_giac[SO_DIEM_TOI_DA][2];
    for (int i = 0; i < so_diem; ++i) {
        cout << "Nhap toa do diem " << i + 1 << ": ";
        cin >> da_giac[i][0] >> da_giac[i][1];
    }

    bool la_loi = true;
    for (int i = 0; i < so_diem - 1; i++) {
        float goc1 = atan2(da_giac[i + 1][1] - da_giac[i][1], da_giac[i + 1][0] - da_giac[i][0]);
        float goc2 = atan2(da_giac[(i + 2) % so_diem][1] - da_giac[i + 1][1], da_giac[(i + 2) % so_diem][0] - da_giac[i + 1][0]);
        if (goc2 - goc1 < 0) {
            la_loi = false;
            break;
        }
    }

    if (la_loi) {
        cout << "Day la da giac loi." << endl;

        float dien_tich = 0.0;
        float chu_vi = 0.0;
        for (int i = 0; i < so_diem; i++) {
            dien_tich += (da_giac[i][0] * da_giac[(i + 1) % so_diem][1]) - (da_giac[(i + 1) % so_diem][0] * da_giac[i][1]);
            chu_vi += sqrt(pow(da_giac[(i + 1) % so_diem][0] - da_giac[i][0], 2) + pow(da_giac[(i + 1) % so_diem][1] - da_giac[i][1], 2));
        }
        dien_tich = abs(dien_tich) / 2;

        cout << "Dien tich cua da giac la: " << dien_tich << endl;
        cout << "Chu vi cua da giac la: " << chu_vi << endl;
    } else {
        cout << "Day khong phai la da giac loi." << endl;
        cout << "Mot trong cac goc cua da giac lon hon 180 do. Do vay, day khong phai la da giac loi." << endl;
    }

    return 0;
}

