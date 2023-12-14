#include <iostream>
using namespace std;
void fibonacciSeries(int n) {
    int a = 0, b = 1;
    int c;

    cout << "Day Fibonacci den so thu " << n << " la: ";

    if (n >= 1) {
        cout << a << " ";
    }
    if (n >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= n; ++i) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Nhap so thu tu n: ";
    cin >> n;

    fibonacciSeries(n);

    return 0;
}

