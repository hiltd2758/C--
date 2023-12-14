#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    int l1 = a, l2=b;
    a = abs(a);
    b = abs(b);

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
	int UCLN = a;
	int BCNN = ( l1*l2 ) / UCLN;
    cout << "UCLN: " << UCLN << endl;
	cout << "BCLN: " << BCNN << endl;
    return 0;
}

