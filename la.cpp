#include<iostream>
#include<cmath>
using namespace std;
int main () {
	int n;
	cout <<"Nhap n: " ;
	cin >> n;
	
	bool cohieu = false ;
	int m = n
	n = abs (n) ;
	while ( n!=0 ) 
	 {
	 	int du;
	 	du = n % 10;
	 	if ( du % 2 != 0) {
	 		cohieu = false;
	 		break;
		 }
	 	n = n /10;
	 	
	 }
	 
	if ( cohieu = true) 
		cout << m <<" toan chan" << endl;
	else {
		cout << m <<" khong toan chan" << endl;

	} 
	
	
	return 0;
}
