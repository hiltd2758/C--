#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void insert_array(int arr[], size_t n) {
    for (size_t i = 0; i < n; ++i) {
        cout << " a[" << i << "] = ";
        cin >> arr[i];
    }
}

void export_array(int arr[], size_t n) {
    for (size_t i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

bool allEven(const int arr[], size_t n) {
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) return false;
    }
    return true;
}

void displayPrimes(const int arr[], size_t n) {
    cout << "Cac so nguyen to co trong mang la: ";
    for (size_t i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void checkSorted(const int arr[], size_t n) {
    int sortedArr[n];
    copy(arr, arr + n, sortedArr);
    sort(sortedArr, sortedArr + n);
    int reverseArr[n];
    copy(arr, arr + n, reverseArr);
    sort(reverseArr, reverseArr + n, greater<int>());

    if (equal(arr, arr + n, sortedArr)) {
        cout << "Mang da duoc sap xep tang dan." << endl;
    } else if (equal(arr, arr + n, reverseArr)) {
        cout << "Mang da duoc sap xep giam dan." << endl;
    } else {
        cout << "Mang chua duoc sap xep." << endl;
    }
}

void removeDuplicates(int arr[], size_t &n) {
    sort(arr, arr + n);
    size_t newn = unique(arr, arr + n) - arr;
    n = newn;
}

void compareEvenOdd(const int arr[], size_t n) {
    int evenCount = 0, oddCount = 0;
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "So luong so chan: " << evenCount << endl;
    cout << "So luong so le: " << oddCount << endl;
}

void insertNumber(int arr[], size_t &n, int x, size_t p) {
    if (p >= 0 && p <= n) {
        for (size_t i = n; i > p; --i) {
            arr[i] = arr[i - 1];
        }
        arr[p] = x;
        n++;
    } else {
        cout << "Vi tri chen khong hop le." << endl;
    }
}

bool isPerfectSquare (int num)
    {
        int sqrt_num = sqrt(num);
        return sqrt_num * sqrt_num == num;

    }

int findPrimeAfterPerfectSquare(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        if (isPerfectSquare(arr[i - 1]) && isPrime(arr[i])) {
            return arr[i];
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy số nguyên tố thỏa điều kiện
}

int main() {
    const size_t MAX_SIZE = 100; // Số phần tử tối đa trong mảng
    int arr[MAX_SIZE];
    size_t n;
    cout << "Nhap phan tu cua mang: ";
    cin >> n;

    if (n > MAX_SIZE) {
        cout << "So phan tu vuot qua gioi han." << endl;
        return 1;
    }

    insert_array(arr, n);
    cout << "Mang vua nhap la: ";
    export_array(arr, n);
    cout << endl;
    displayPrimes(arr, n);
    checkSorted(arr, n);

    int arrCopy[MAX_SIZE];
    copy(arr, arr + n, arrCopy);
    removeDuplicates(arrCopy, n);

    compareEvenOdd(arrCopy, n);

    int numberToInsert = 10;
    size_t positionToInsert = 3;

    
    cout << "Nhap gia tri phan tu can chen: " ;
    cin >> numberToInsert;
    cout << "Nhap vi tri phan tu can chen: ";
    cin >> positionToInsert;
    insertNumber(arr, n, numberToInsert, positionToInsert);

    cout << "Mang sau khi chen la: ";
    export_array(arr, n);
    cout << endl;

    int result = findPrimeAfterPerfectSquare(arr, n);
    if (result != -1) {
        cout << "So nguyen to dau tien sau so chinh phuong la: " << result << endl;
    } else {
        cout << "Khong tim thay so nguyen to thoa dieu kien." << endl;
    }


    return 0;
}
