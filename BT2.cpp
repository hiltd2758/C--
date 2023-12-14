#include <iostream>
using namespace std;


int tinhTong(int n) {
    return n * (n + 1) / 2;
}


int TongLe(int n) {
    int s1 = 0;
    for ( int i = 0 ; i <= n ; ++i )
    	{
    		s1 += 2*i +1 ;
		}
    return s1;
}


int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 2; i <= n; ++i) {
        giaiThua *= i;
    }
    return giaiThua;
}


double TongThuong(int n) {
    double tong = 0.0;
    for (int i = 2; i <= n; ++i) {
        tong += 1.0 / (i * (i + 1));
    }
    return tong;
}

int main() {
    int n;

    do {
        cout << "Nhap n: ";
        cin >> n;

        if (n < 0) {
            cout << "Gia tri n nhap vao phai la so duong" << endl;
        }
    } while (n < 0);

    cout << "Tong cua day S (S = 1 + 2 + 3 + ... + n) la: " << tinhTong(n) << endl;

    cout << "Tong cua day S (S = 1 + 3 + 5 + 7 + ... + (2n + 1)) la: " << TongLe(n) << endl;

    cout << "Giai thua cua " << n << " la: " << tinhGiaiThua(n) << endl;

    cout << "Tong cua day so (S = 1/2*3 + 1/3*4 + ... + 1/n*(n+1)) la: " << TongThuong(n) << endl;

    return 0;
}

