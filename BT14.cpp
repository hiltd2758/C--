#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long soNguyenNhap;
    cout << "Nhap: ";
    cin >> soNguyenNhap;
    long long soNguyenBanDau = abs(soNguyenNhap);

    cout << "He 10: " << soNguyenBanDau << endl;

    cout << "He 16: ";
    if (soNguyenBanDau == 0) {
        cout << "0" << endl;
    } else {
        char thapLucPhan[50];
        int i = 0;
        soNguyenNhap = soNguyenBanDau;

        while (soNguyenNhap > 0) {
            int du = soNguyenNhap % 16;
            if (du < 10) {
                thapLucPhan[i++] = du + '0';
            } else {
                thapLucPhan[i++] = du - 10 + 'A';
            }
            soNguyenNhap /= 16;
        }

        for (int j = i - 1; j >= 0; --j) {
            cout << thapLucPhan[j];
        }
        cout << endl;
    }

    cout << "He 8: ";
    if (soNguyenBanDau == 0) {
        cout << "0" << endl;
    } else {
        int batPhan[50];
        int i = 0;
        soNguyenNhap = soNguyenBanDau;

        while (soNguyenNhap > 0) {
            batPhan[i++] = soNguyenNhap % 8;
            soNguyenNhap /= 8;
        }

        for (int j = i - 1; j >= 0; --j) {
            cout << batPhan[j];
        }
        cout << endl;
    }

    cout << "He 2: ";
    if (soNguyenBanDau == 0) {
        cout << "0" << endl;
    } else {
        int nhiPhan[50];
        int i = 0;
        soNguyenNhap = soNguyenBanDau;

        while (soNguyenNhap > 0) {
            nhiPhan[i++] = soNguyenNhap % 2;
            soNguyenNhap /= 2;
        }

        for (int j = i - 1; j >= 0; --j) {
            cout << nhiPhan[j];
        }
        cout << endl;
    }

    return 0;
}

