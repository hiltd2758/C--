#include<iostream>
using namespace std;
int main (){
	int n;
	do {
		cout <<"Nhap n:";
		cin >> n;
		
	    if ( n < 0) {
	    	cout <<"Nhap lai, n > 0" ;
		}
		
	} while ( n<0 ) ;
	double s = 0 ;
	for ( int i = 1 ; i <= n ; ++i) 
	   {
	   	s += 1.0 /  2*i;
	   }
	
	cout << s << endl;
	return 0;
}
