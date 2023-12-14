#include <iostream>
using namespace std;

bool kiem_tra_so_nguyen_to(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void in_so_nguyen_to_nho_hon_n(int n) {
    cout << "Cac so nguyen to nho hon " << n << " la:\n";
    for (int i = 2; i < n; ++i) {
        if (kiem_tra_so_nguyen_to(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int tinh_tong_so_nguyen_to_nho_hon_n(int n) {
    int tong = 0;
    for (int i = 2; i < n; ++i) {
        if (kiem_tra_so_nguyen_to(i)) {
            tong += i;
        }
    }
    return tong;
}

void in_n_so_nguyen_to_dau_tien(int n) {
    cout << "Cac so nguyen to dau tien la:\n";
    int count = 0;
    for (int i = 2; count < n; ++i) {
        if (kiem_tra_so_nguyen_to(i)) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
}

int tinh_tong_n_so_nguyen_to_dau_tien(int n) {
    int tong = 0;
    int count = 0;
    for (int i = 2; count < n; ++i) {
        if (kiem_tra_so_nguyen_to(i)) {
            tong += i;
            count++;
        }
    }
    return tong;
}

int main() {
    int n;
    do {
        cout << "Nhap so nguyen n (n > 0): ";
        cin >> n;
    } while (n <= 0); // Yêu c?u nh?p l?i n?u n <= 0

    in_so_nguyen_to_nho_hon_n(n);
    cout << "Tong cac so nguyen to nho hon " << n << " la: " << tinh_tong_so_nguyen_to_nho_hon_n(n) << endl;

    int so_nguyen_to_dau_tien;
    cout << "Nhap so nguyen to dau tien can in: ";
    cin >> so_nguyen_to_dau_tien;

    in_n_so_nguyen_to_dau_tien(so_nguyen_to_dau_tien);
    cout << "Tong " << so_nguyen_to_dau_tien << " so nguyen to dau tien la: " << tinh_tong_n_so_nguyen_to_dau_tien(so_nguyen_to_dau_tien) << endl;

    return 0;
}

