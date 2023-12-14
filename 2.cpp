#include<iostream>
using namespace std;

int main () {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    if (a > b) {
        cout << a << " la so lon nhat" << endl;
    } else {
        cout << b << " la so lon nhat" << endl;
    }
    
    return 0;
}

