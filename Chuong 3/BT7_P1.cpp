#include <iostream>

using namespace std;
int USCLN(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int a, b, c;

    cout << "Nhap vao 3 so nguyen a, b, c: ";
    cin >> a >> b >> c;

    int S = USCLN(a, b) + USCLN(b, c) + USCLN(a, c);

    cout << "S = USCLN(a, b) + USCLN(b, c) + USCLN(a, c) = " << S << endl;

    return 0;
}

