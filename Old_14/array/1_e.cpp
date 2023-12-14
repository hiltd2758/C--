#include <iostream>
#include <cmath>
using namespace std;
const int max = 100;


void NhapMang(int arr[], int& size) {
    do {
        cout << "Nhap so luong phan tu (toi da 100): ";
        cin >> size;
    } while (size <= 0 || size > max;

	cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int KiemTraChan(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            return 0; 
        }
    }
    return 1; 
}


bool KiemTraNguyenTo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int KiemTraMangNguyenTo(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (!KiemTraNguyenTo(arr[i])) {
            return 0; 
        }
    }
    return 1;

bool KiemTraChinhPhuong(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int KiemTraMangChinhPhuong(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (!KiemTraChinhPhuong(arr[i])) {
            return 0; 
        }
    }
    return 1; 

int KiemTraMangTangDan(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}

void XuatMang(int arr[], int size) {
    std::cout << "Cac phan tu cua mang:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int arr[max];
    int size;

    NhapMang(arr, size);
    XuatMang(arr, size);

    if (KiemTraChan(arr, size)) {
        cout << "Mang chi chua cac so chan." << endl;
    } else {
        cout << "Mang khong chi chua cac so chan."<< endl;
    }

    if (KiemTraMangNguyenTo(arr, size)) {
        cout << "Mang chi chua cac so nguyen to."<< endl;
    } else {
        cout << "Mang khong chi chua cac so nguyen to."<< endl;
    }

    if (KiemTraMangChinhPhuong(arr, size)) {
        cout << "Mang chi chua cac so chinh phuong." << endl;;
    } else {
        cout << "Mang khong chi chua cac so chinh phuong." << endl;
    }

    if (KiemTraMangTangDan(arr, size)) {
        cout << "Mang tang dan." << endl;
    } else {
        cout << "Mang khong tang dan." << endl;
    }

    return 0;
}

