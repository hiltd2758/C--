#include <iostream>
using namespace std;
int min4(int a, int b, int c, int d) {
    int f = (a < b) ? a : b; 
    int e = (c < d) ? c : d; 
    return (e < f) ? e : f; 
}

int main() {
    int num1, num2, num3, num4;
    cout << "Nhap so nguyen: ";
    cin >> num1 >> num2 >> num3 >> num4;

    int min = min4(num1, num2, num3, num4);

    cout << "So be nhat la: " << min << endl;

    return 0;
}

