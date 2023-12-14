#include<iostream>
using namespace std;
int main (){
	int n;
	do {
		cout << "Nhap n: " ;
		cin >> n;
		if ( n < 0 ) 
		cout <<"n nhap vao khong the la so am: ";
		
	} while ( n< 0);
	
	double s = 0;
	for ( int i =1; i< n+1 ; ++i)
	    {
	      s += 	1.0 / i;
		}
	 
	 cout << "Tong cua day so la: " << s << endl;
	
	return 0;
}
