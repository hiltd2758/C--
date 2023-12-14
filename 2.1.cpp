#include <iostream>
using namespace std;
int main (){
	int n;
	do {
		cout <<"Nhap n: ";
		cin >> n;
		
		if ( n < 0) {
			cout <<"gia tri n nhap vao phai la so duong" << endl;
		}
	} while ( n < 0 );
	long long result = 1;
        for (int i = (n % 2) ? 1 : 2; i <= n; i += 2) {
            result *= i;
        }
        cout << "Gia tri cua " << n << "!! la: " << result;
	
	
	return 0;
}
