#include <iostream>
using namespace std;

int main() {
    int loaiCongNhan;
    do {
        cout << "Nhap ma (1-4): ";
        cin >> loaiCongNhan;
        if (loaiCongNhan < 1 || loaiCongNhan > 4) 
            cout << "Loi, vui long nhap lai." << endl;
    } while (loaiCongNhan < 1 || loaiCongNhan > 4);

    switch (loaiCongNhan) {
        case 1: {
            double luong;
            cout << "Nhap luong co dinh: ";
            cin >> luong;
            cout << "Luong tuan la: " << luong << endl;
            break;
        }
        case 2: {
            double luongCoBan, gioLamViec;
            cout << "Nhap so luong co ban: ";
            cin >> luongCoBan;

            do {
                cout << "Nhap so gio lam viec: ";
                cin >> gioLamViec;
                if (gioLamViec <= 0) {
                    cout << "So gio khong hop le, nhap lai!" << endl;
                }
            } while (gioLamViec <= 0);

           double luong;

		if (gioLamViec <= 40) {
    		luong = luongCoBan * gioLamViec;
		} else {
    		luong = luongCoBan * 40 + luongCoBan * 1.5 * (gioLamViec - 40);
		}

            cout << "Luong tuan la: " << luong << endl;
            break;
        }
        case 3: {
            double doanhSo;
            cout << "Nhap gia tri doanh so: ";
            cin >> doanhSo;
            double luong = 500000 + 0.07 * doanhSo;
            cout << "Luong tuan la: " << luong << endl;
            break;
        }
        case 4: {
            double luongSanPham, soSanPham;
            cout << "Nhap so tien luong cho moi san pham: ";
            cin >> luongSanPham;
            cout << "Nhap so sp da lam: ";
            cin >> soSanPham;
            double luong = luongSanPham * soSanPham;
            cout << "Luong tuan la: " << luong << endl;
            break;
        }
       
    }

    return 0;
}

