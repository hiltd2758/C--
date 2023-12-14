#include<iostream>;
#include<cmath>
using namespace std;
int main (){
	double x, y, z; // toa do
	double a, b, c, d; // he so
	
	cout <<"Nhap toa do diem A ( x, y, z ): ";
	cin >> x >> y >> z ;
	    
	    
	// ax + by + cz + d = 0:
	while ( true ) {
	cout <<"Nhap he so a: ";
	cin >> a;
	
	cout <<"Nhap he so b: "; 
	cin >>b;
	
	cout <<"Nhap he so c: ";
	cin >>c;
	
	cout <<"Nhap he so d: ";
	cin >>d;
	
	if ( a == 0 && b == 0 && c == 0 ) {
		cout <<"Mat phang chua hop le, hay nhap lai. " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		continue ;
	} else {
	
	 double khoang_cach = abs( a*x + b*y + c*z + d ) / sqrt ( a*a + b*b + c*c) ;
	
	 cout <<"Khoang cach tu diem A toi mat phang la: " << khoang_cach << endl;
	  
	 break;
	 }
	
	}

	
	return 0;
}
