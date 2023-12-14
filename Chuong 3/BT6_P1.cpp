#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int M, N;

    cout << "Nhap gia tri cua M: ";
    cin >> M;
    cout << "Nhap gia tri cua N (lon hon " << M << "): ";
    cin >> N;

    if (M >= N) {
        cout << "N phai lon hon M. Vui long nhap lai." << endl;
        return 1; 
    }

    int sum = 0;
    int count = 0; //count fibo

    while (true) {
        int currentFib = fibonacci(count);

        if (currentFib > N) {
            break; 
        }

        if (count >= M && currentFib % 2 == 0) {
            sum += currentFib; //Cộng số fibo chắn từ m đến n
        }

        count++;
    }

    cout << "Tong cac so chan trong day Fibonacci tu F(" << M << ") den F(" << N << ") la: " << sum << endl;

    return 0;
}
