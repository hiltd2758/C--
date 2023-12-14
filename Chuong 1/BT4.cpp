#include <iostream>
using namespace std;

int main() {
    int n;
   

    do 
    	{
    		cout << "Nhap vao mot so nguyen duong: ";
    		cin >> n;
    		
    		if ( n < 0 ) 
    			cout <<"Gia tri nhap vao la so nguyen duong, nhap lai!" << endl;
		} 
	while ( n < 0 );
	
	
	bool isPrime = true;
    if (n < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong phai la so nguyen to" << endl;
    }

    return 0;
}

