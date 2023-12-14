#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int a,b;
	cout <<"Nhap a: ";
	cin >> a;
	cout <<"Nhap b: ";
	cin >>b;
	a = abs(a);
	b = abs(b);
	int ucln = 1;
	for ( int i = 1; i <= a && i <= b ; ++i ) {
	
		if ( a % i ==0 && b%i == 0) {
		
			ucln = i ;
}
}
	int bcnn = ( a*b ) / ucln ;
	
	cout <<"UCLN: " << ucln << endl;
	
	cout <<"BCNN: " << bcnn << endl;
	
	
	return 0;
}

/* nhap so am chay ko duoc --> loi thuc thi ( run time ) --> treo may
