#include <iostream>
using namespace std;
int ChieuDaiSoNguyen(int n) {
    int chieuDai = 0;
    while (n != 0) {
        n = n / 10;
        chieuDai++;
    }
    return chieuDai;
}

int main() {
    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;

    int chieuDai = ChieuDaiSoNguyen(num);

    cout << "Chieu dai cua " << num << " la: " << chieuDai << endl;

    return 0;
}

