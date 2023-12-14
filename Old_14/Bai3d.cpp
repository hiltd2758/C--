#include <iostream>

using namespace std;


int gt(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * gt(n - 1);
    }
}

int main() {
    int n;

    do {
        cout << "Nhap n (so nguyen duong): ";
        cin >> n;

        if (n < 0) {
            cout << "N nhap vao la so nguyen duong.\n";
        }
    } while (n < 0);

    int s = 0;

    for (int i = 1; i <= n; ++i) {
        s += gt(i);
    }

    cout << "S = 1! + 2! + ... + " << n << "! = " << s << endl;

    return 0;
}

