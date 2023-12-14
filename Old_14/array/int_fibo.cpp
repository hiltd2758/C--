#include <iostream>
using namespace std;
int fibo(int n) {
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;
    cout << "Nhap so phan tu can in trong day Fibonacci: ";
    cin >> num;

    int result = fibo(num);

    cout << "Phan tu thu " << num << " cua day Fibonacci la: " << result << endl;

    return 0;
}

