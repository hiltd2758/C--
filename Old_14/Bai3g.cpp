#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n ;
	do {
		cout << " Nhap n: ";
		cin >> n ;
		
		if ( n< 0) 
		  cout <<"So n nhap ko the am" ;
	} while ( n< 0);
	
	double s = 0  ;
	for ( int i = 1; i < n+1 ; ++ i) 
	   {
	   	s += i*i;
	   
	   }
	s = sqrt(s);
	cout <<"Ket qua cua day S khi n= " << n << " la: " << s << endl;
	return 0;
}
