#include <iostream>
#include <cmath>
#include <algorithm> // Thêm thu vi?n algorithm d? s? d?ng hàm sort
using namespace std;

const int MAX_SIZE = 100;

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

void NhapMang(int arr[], int& size) {
    do {
        cout << "Nhap so luong phan tu (toi da 100): ";
        cin >> size;
    } while (size <= 0 || size > MAX_SIZE);

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void XuatMang(int arr[], int size) {
    cout << "Cac phan tu cua mang:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void TachSoKhongNguyenTo(int arr[], int size, int result[], int& resultSize) {
    resultSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!KiemTraNguyenTo(arr[i])) {
            result[resultSize] = arr[i];
            ++resultSize;
        }
    }
}

void TachMang(int arr[], int size, int positive[], int& positiveSize, int negative[], int& negativeSize, int zero[], int& zeroSize) {
    positiveSize = negativeSize = zeroSize = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positive[positiveSize] = arr[i];
            ++positiveSize;
        } else if (arr[i] < 0) {
            negative[negativeSize] = arr[i];
            ++negativeSize;
        } else {
            zero[zeroSize] = arr[i];
            ++zeroSize;
        }
    }
}

void TronMangTang(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            ++i;
        } else {
            result[k] = arr2[j];
            ++j;
        }
        ++k;
    }

    while (i < size1) {
        result[k] = arr1[i];
        ++i;
        ++k;
    }

    while (j < size2) {
        result[k] = arr2[j];
        ++j;
        ++k;
    }
}

void TronMangGiam(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = size1 - 1, j = size2 - 1, k = size1 + size2 - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] >= arr2[j]) {
            result[k] = arr1[i];
            --i;
        } else {
            result[k] = arr2[j];
            --j;
        }
        --k;
    }

    while (i >= 0) {
        result[k] = arr1[i];
        --i;
        --k;
    }

    while (j >= 0) {
        result[k] = arr2[j];
        --j;
        --k;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;
    int result[MAX_SIZE];
    int resultSize;

    NhapMang(arr, size);
    XuatMang(arr, size);

    TachSoKhongNguyenTo(arr, size, result, resultSize);
    XuatMang(result, resultSize);

    int positive[MAX_SIZE], negative[MAX_SIZE], zero[MAX_SIZE];
    int positiveSize, negativeSize, zeroSize;
    TachMang(arr, size, positive, positiveSize, negative, negativeSize, zero, zeroSize);
    XuatMang(positive, positiveSize);
    XuatMang(negative, negativeSize);
    XuatMang(zero, zeroSize);

    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1, size2;
    int resultMerge[MAX_SIZE];

    cout << "Nhap so luong phan tu cua mang 1: ";
    cin >> size1;
    NhapMang(arr1, size1);

    cout << "Nhap so luong phan tu cua mang 2: ";
    cin >> size2;
    NhapMang(arr2, size2);

    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    TronMangTang(arr1, size1, arr2, size2, resultMerge);
    XuatMang(resultMerge, size1 + size2);

    TronMangGiam(arr1, size1, arr2, size2, resultMerge);
    XuatMang(resultMerge, size1 + size2);

    return 0;
}

