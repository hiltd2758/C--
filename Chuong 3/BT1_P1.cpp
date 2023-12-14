#include <iostream>
using namespace std;
int DaoNguocSo(int n) {
    int daoNguoc = 0;
    
    while (n > 0) {
        daoNguoc = daoNguoc * 10 + n % 10;
        n = n / 10;
    }
    
    return daoNguoc;
}

int main() {
    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;

    int daoNguoc = DaoNguocSo(num);

    cout << "So dao nguoc cua " << num << " la: " << daoNguoc << endl;

    return 0;
}

