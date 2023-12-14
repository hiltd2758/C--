#include <iostream>
using namespace std;

int main() {

    int so_sinh_vien;
    cout << "Nhap so luong sinh vien: ";
    cin >> so_sinh_vien;
    float tong_diem = 0.0;
    float diem;
    for (int i = 0; i < so_sinh_vien; ++i) {
        do {
            cout << "Nhap diem trung binh cua sinh vien " << i + 1 << " : ";
            cin >> diem;
            if (diem < 0 || diem > 10) {
                cout << "Diem khong hop le, vui long nhap lai" << endl;
            }
        } while (diem < 0 || diem > 10);

        tong_diem += diem; 
    }
    float diem_trung_binh_cong = tong_diem / so_sinh_vien;
    cout << "Diem trung binh cong cua tat ca sinh vien la: " << diem_trung_binh_cong << endl;
    return 0;
}

