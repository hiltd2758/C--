#include<iostream>
using namespace std;

void nhaparray(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
}

void printarray(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    int a[100];
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhaparray(a, n);

    cout << "Mang ban dau: ";
    printarray(a, n);

    selection_sort(a, n);

    cout << "Mang sau khi sap xep: ";
    printarray(a, n);

    return 0;
}

