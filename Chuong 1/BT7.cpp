#include<iostream>
#include<cmath>
#include<iomanip>
double khoang_cach ( double xA, double yA, double xB, double yB) {
    return sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    }
using namespace std;
int main (){
	double xA, xB, xC, yA, yB, yC;
	double a, b, c;
	
	while (true) {
	cout <<"Nhap toa do cua dinh A ( x, y ): ";
	cin >> xA >> yA;
	
	cout <<"Nhap toa do cua dinh B ( x, y ): ";
	cin >> xB >> yB;
	
	cout <<"Nhap toa do cua dinh C ( x, y ): " ;
	cin >> xC >> yC;
	
	
	if ( cin.fail() || ( xA == xB && yA == yB ) || ( xA == xC && yA == yC ) || ( xB == xC && yB == yC)) {
		cout <<"Gia tri nhap sai hoac co diem da trung nhau, hay nhap lai. " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		continue;
		}
		
		break;
	}
	double canhA = khoang_cach( xA, yA, xB, yB );
	double canhB = khoang_cach( xB, yB, xC, yC );
	double canhC = khoang_cach( xC, yC, xA, yA );
	
	double chu_vi = canhA + canhB + canhC ;
	
	double nua_cv = chu_vi/2;
	double dien_tich = sqrt ( nua_cv * ( nua_cv - canhA ) * ( nua_cv - canhB ) * ( nua_cv - canhC ));  
	
	cout <<"Chu vi cua tam giac la: " << chu_vi << endl;
	cout << fixed << setprecision (3) <<"Dien tich cua tam giac la: " << dien_tich << endl;                     

	return 0;
}
