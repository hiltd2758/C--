#include <iostream>
using namespace std;
int main () {
	int k;
	
	do {
		cout <<"nhap k: ";
		cin >> k;
		
		if ( k< 0 ) {
			cout <<"so k nhap vao khong the la so am" ;
		
		} 
		else if ( k %2 == 0) 
		  k += 1;
	} while ( k< 0);
	
	double s = 0;
	for ( double i = 1 ; i < k + 1 ; i+= 2) 
	   {
	   	s += 1.0 / i;
	   }
	cout << "Tong cua S den"<< k <<"la: " << s << endl;
	return 0;
}
