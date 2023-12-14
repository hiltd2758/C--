#include<iostream>
using namespace std;
int main (){
	double toan, ly, hoa ;
	int hst, hsl, hsh ; // hs = he so
	
	while ( true ) {
		
	cout <<"Nhap diem mon toan: " ;
	cin >> toan;
    cout <<"Nhap he so mon Toan: ";
    cin >> hst;
	
	if ( toan < 0 || toan > 10 || hst <=0 ) {
	   cout<<"Du lieu nhap vao cho mon Toan chua hop le\n" ;
	   cin.clear();
	   cin.ignore(100, '\n');
	   continue; 
	
	}
	
	cout <<"Nhap diem mon Ly: " ;
	cin >> ly;
    cout <<"Nhap he so mon Toan: ";
    cin >> hsl;
	
	if ( ly < 0 || ly > 10 || hsl <=0 ) {
	   cout<<"Du lieu nhap vao cho mon Ly chua hop le\n" ;
	   continue; 
	
	}
	
	cout <<"Nhap diem mon Hoa: " ;
	cin >> hoa;
    cout <<"Nhap he so mon Hoa: ";
    cin >> hsh;
	
	if ( hoa < 0 || hoa > 10 || hoa <=0 ) {
	   cout<<"Du lieu nhap vao cho mon Toan chua hop le\n" ;
	   continue; 
	
	 } 
	 
	 double tb = ( toan * hst + ly * hsl + hoa * hsh ) / ( hst + hsl + hsh );
	 cout <<"Diem trung binh cua sinh vien do la: " << tb << endl;
	 
	 break;
	}

 return 0;
}
