#include <iostream>

using namespace std;

bool KiemTraNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void ChenSauSNT(int arr[], int& size, int x) {
    int result[100]; // Thay 100 b?ng kích thu?c t?i da c?a m?ng arr
    int resultSize = 0;

    for (int i = 0; i < size; ++i) {
        result[resultSize++] = arr[i];
        if (KiemTraNguyenTo(arr[i])) {
            result[resultSize++] = x;
        }
    }

    size = resultSize;
    for (int i = 0; i < size; ++i) {
        arr[i] = result[i];
    }
}

int main() {
    int arr[] = {2, 4, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    ChenSauSNT(arr, size, x);

    cout << "Mang sau khi chen sau cac so nguyen to: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

