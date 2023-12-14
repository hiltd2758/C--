#include <iostream>
using namespace std;
int main () {
	int n;
	do {
		cout <<"Nhap n: "; 
		cin >> n ;
		if ( n< 0 )
		   cout <<"N nhap vao khong the la so am!" << endl;
		
	} while ( n< 0) ;
	
	int s = 0;
	for ( int i = 1; i < n+1 ; ++i)
	   {
	   	 s += i;
	   }
	
	cout <<"Tong cua day so la: " << s << endl;
	
	
	return 0;
}
