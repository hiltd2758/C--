#include<iostream>
#include<cmath>
using namespace std;
int main (){
	double canh;
	
	while ( true ) {
		cout <<"Nhap do dai mot canh cua hinh vuong: " ;
		cin >> canh;
		
		if ( canh <= 0 || cin.fail()) {
		cout <<"Do dai nhap vao khong dung kieu du lieu, hay nhap lai\n";
		cin.clear();
		cin.ignore(100, '\n' );
		
	}   else {
			
			 double chu_vi = 4 * canh ;
			double dien_tich = canh * canh;
			double duong_cheo = canh * sqrt(2);
	  
	        cout <<"Chu vi cua hinh vuong la: " << chu_vi << endl;
			cout <<"Dien tich cua hinh vuong la: " << dien_tich << endl;
			cout <<"Do dai duong cheo cua hinh vuong la: "<< duong_cheo << endl;
			
			break;
			
	  }  
	}
	 return 0;
	}
	

