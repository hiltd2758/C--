#include <iostream>

using namespace std;

bool hopLe(int ngay, int thang, int nam) {
    if (nam < 0 || thang < 1 || thang > 12 || ngay < 1) {
        return false;
    } else {
        switch (thang) {
            case 4: case 6: case 9: case 11:
                return ngay <= 30;
            case 2:
                if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
                    return ngay <= 29;
                } else {
                    return ngay <= 28;
                }
            default:
                return ngay <= 31;
        }
    }
}

int soNgayTrongThang(int thang, int nam) {
    int soNgay;
    switch (thang) {
        case 4: case 6: case 9: case 11:
            soNgay = 30;
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
                soNgay = 29;
            } else {
                soNgay = 28;
            }
            break;
        default:
            soNgay = 31;
    }
    return soNgay;
}

void ngayTiepTheo(int ngay, int thang, int nam) {
    if (!hopLe(ngay, thang, nam)) {
        cout << "Ngay va thang khong hop le." << endl;
        return;
    }

    int soNgay = soNgayTrongThang(thang, nam);

    int ngaySau = ngay + 1;
    int thangSau = thang;
    int namSau = nam;
    if (ngaySau > soNgay) {
        ngaySau = 1;
        thangSau = (thangSau + 1);
        if (thangSau > 12) {
            thangSau = 1;
            namSau += 1;
        }
    }
    cout << "Ngay hom sau la ngay " << ngaySau << " thang " << thangSau << " nam " << namSau << endl;
}

void ngayTruocDo(int ngay, int thang, int nam) {
    if (!hopLe(ngay, thang, nam)) {
        cout << "Ngay va thang khong hop le." << endl;
        return;
    }

    int ngayTruoc = ngay - 1;
    int thangTruoc = thang;
    int namTruoc = nam;
    if (ngayTruoc < 1) {
        thangTruoc = (thangTruoc - 1 + 11) % 12 + 1;
        if (thangTruoc = 12) {
        
            namTruoc = namTruoc -1;
        }
        ngayTruoc = soNgayTrongThang(thangTruoc, namTruoc);
    }
    cout << "Ngay hom truoc la ngay " << ngayTruoc << " thang " << thangTruoc << " nam " << namTruoc << endl;
}

int main() {
    int ngay, thang, nam;
    cout << "Nhap vao ngay: ";
    cin >> ngay;
    cout << "Nhap vao thang: ";
    cin >> thang;
    cout << "Nhap vao nam: ";
    cin >> nam;
	int quy = (thang-1) /3+1;
    if (hopLe(ngay, thang, nam)) {
        cout << "Ngay va thang hop le." << endl;
        cout << "Thang nay thuoc quy " << quy<< " trong nam." << endl;
        int soNgay = soNgayTrongThang(thang, nam);
        cout << "Thang " << thang << " co " << soNgay << " ngay." << endl;
	
        ngayTiepTheo(ngay, thang, nam);
        ngayTruocDo(ngay, thang, nam);
    } else {
        cout << "Ngay va thang khong hop le." << endl;
    }

    return 0;
}

