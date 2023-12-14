#include <iostream>
#include <cmath>
using namespace std;
int main (){
	double xA, xB , yA, yB ;
	
	cout <<"Nhap toa do cua diem a ( x, y ): " ;
	cin >> xA >> yA ;
	
	cout <<"Nhap toa do cua diem b ( x, y ): " ;
	cin >> xB >> yB;
	
	if ( xA == xB && yA == yB) {
		
	   cout <<"Diem A va B co cung toa do nen do dai cua vecto AB = 0";
	} else {
	
	double vtAB = sqrt(pow( xB - xA , 2 ) + pow ( yB - yA ,2 ));
	
	cout <<"Do dai vecto AB la: " << vtAB << endl;

	}
	
	return 0;
}
