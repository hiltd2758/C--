#include <iostream>
using namespace std;
int main (){
	double a, b;
	
	while ( true ) {
		cout <<"Nhap chieu dai cua hinh chu nhat: ";
	    cin >> a;
	
	    cout <<"Nhap chieu rong cua hinh chu nhat: ";
	    cin >> b;
	
	if ( a>0 && b>0 ) {
		break;
	} else {
		cout <<"Do dai phai la so duong, hay nhap lai! "<<endl;
		
	}
	}
	double chu_vi = 2*( a+b );
	double dien_tich = a * b;
	
	cout<<"Chu vi cua hinh chu nhat do dai bang " << a << " va chieu dai bang " << b << "la:" << chu_vi <<endl;
	cout<<"Dien tich cua hinh chu nhat do dai bang " << a << " va chieu dai bang " << b << "la:" << dien_tich <<endl;
	return 0;
 
}
