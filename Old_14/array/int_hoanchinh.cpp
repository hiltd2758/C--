#include <iostream>
using namespace std;
int hoanchinh(int n) {
    if (n <= 0) {
        return 0; 
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i; 
        }
    }

    return (sum == n) ? 1 : 0; 
}

int main() {
    int num;
    cout << "Nhap so: ";
    cin >> num;

    int ketqua = hoanchinh(num);

    if (ketqua == 1) {
        cout << num << " la so hoan chinh." << endl;
    } else {
        cout << num << " khong la so hoan chinh." << endl;
    }

    return 0;
}

