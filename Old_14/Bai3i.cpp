#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n;
	do {
		cout << " Nhap n: " ;
		cin >> n ;
		
		if ( n < 0 ) {
			cout << "Gia tri n nhap vao phai la so duong!!!";
		}
		
		
	} while ( n < 0 ) ;
	
	double s =  sqrt(n);
	for ( int i = n -1; i >=1 ; --i)
	  {
	  	s = sqrt( s + i );
	  }
	 
	cout <<"Tong cua day so S la : " << s << endl;
	
	return 0;
}
