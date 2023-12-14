#include <iostream>
using namespace std;
bool nguyento(int n) {
    if (n <=1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int number;
	do {
		
    	cout << "Nhap mot so nguyen duong: ";
    	cin >> number;
    	if ( number < 0 ) 
    		cout <<"So nhap vao phai la nguyen duong, hay nhap lai! " << endl;
    } while ( number < 0 ) ;

    if (nguyento(number)) {
        cout << number << " la so nguyen to";
    } else {
        cout << number << " khong phai la so nguyen to";
    }

    return 0;
}

