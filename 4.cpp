#include<iostream>
using namespace std;
int main ()
{
	int TNCT ;
	const int luongcb = 650000;
	double hs;
	do {
		cout <<"TNCT = " ;
		cin >> TNCT;
		
		if ( TNCT<0 )
			cout<<"TNCT khong the la so am: ";
	} while (TNCT<0) ;
	
	if (TNCT < 12) {
        hs = 1.92;
    } else if (TNCT < 36) {
        hs = 2.34;
    } else if (TNCT < 60) {
        hs = 3;
    } else {
        hs = 4.5;
    }
	
	long long luong = hs * luongcb  ;
	
	cout <<"Luong cua nhan vien la:" << luong << " dong " << endl;
	
	return 0;
}
