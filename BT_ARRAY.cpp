#include<iostream>
using namespace std;

void nhapmang(int a[], int& n) {
    cout <<"Nhap so phan tu co trong mang: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout<<"So thu a[" << i << "] : ";
        cin >> a[i];
    }
}

void xuatmang(int n, int a[]) {
    cout <<"Cac phan tu vua nhap trong mang la: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }
}

int main() {
    int n;
    int a[n]; 
    nhapmang(a, n);
    xuatmang(n, a);
    return 0;
}

