#include <iostream>
using namespace std;

int fibonancy(int n) {
    int fib[n + 2];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int tong(int n) {
    int s = 0;
    for (int i = 0; i <= n; ++i) {
        s += fibonancy(i);
    }
    return s;
}

int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n < 0)
            cout << " Gia tri n nhap phai la so nguyen duong, nhap lai!" << endl;
    } while (n < 0);

    cout << "Phan tu thu " << n << " cua day fibonancy la: " << fibonancy(n) << endl;

    cout << "Cac so dau tien cua day fibonancy den " << n << " la: ";
    for (int i = 0; i <= n; ++i) {
        cout << fibonancy(i) << " ";
    }
    cout << endl;

    cout << "Tong " << n << " so dau tien cua day fibonancy la: " << tong(n) << endl;

    return 0;
}

