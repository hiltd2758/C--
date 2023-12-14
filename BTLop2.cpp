#include<iostream>
using namespace std;
int main (){
	
	int f0 = 0, f1=1, n;
	
	cout <<"Nhap n:" ;
	cin >> n;
	
	if ( n ==0 ) 
		cout << f0;
	else if ( n == 1 )				
		cout << f1;
	else {
	for ( int i =2 ; i <= n ; ++i  ){		
		int f = f1 + f0;				/*       a = 5*a1 - 6*a0   
												 3^n - 2^n : ( pow( 3, n) - pow ( 2,n ) )     */
		f0 = f1;
		f1 = f;
	}
}
	
	cout <<"So hang thu " << n << " cua day fibonancy la: " << f << endl;
	
	return 0;
}
