#include <iostream>
#include <cmath> 
using namespace std;
int chinhphuong(int n) {
    if (n < 0) {
        return 0; 
    }

    int sqrt_n = sqrt(n); 
    return (sqrt_n * sqrt_n == n) ? 1 : 0; 
}

int main() {
    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;

    int ketqua = chinhphuong(num);

    if (ketqua == 1) {
        cout << num << " la so chinh phuong." << endl;
    } else {
        cout << num << " khong la so chinh phuong." << endl;
    }

    return 0;
}

