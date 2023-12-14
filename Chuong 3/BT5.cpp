#include <iostream>

using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int combination(int n, int k) {
    if (k > n) {
        return 0; 
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, k;
    cout << "Nhap n va k de tinh to hop chap k cua n: ";
    cin >> n >> k;

    int result = combination(n, k);
    cout << "To hop chap " << k << " cua " << n << " la: " << result << endl;

    return 0;
}

