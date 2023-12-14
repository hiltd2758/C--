#include<iostream>
using namespace std;
int main (){
	double so_km;
	const double km_dau = 15000;
	const double km_hai = 12000;
	const double thue = 0.1;     // 10% 
	
	while (true) {
	  cout <<"Nhap vao so km da di chuyen duoc: " ;
	  cin >> so_km;
	
	if ( cin.fail()) {
		cout<<"\nNhap sai kieu du lieu, hay nhap so. " ;
		cin.clear();
		cin.ignore(100, '\n');
		continue;
		
		
	 }
	 
	 if ( so_km < 0 ) {
	 	cout <<"\nSo km khong the la so am! ";
	 	cin.clear();
	 	cin.ignore(100, '\n');
	 	continue;
	 
	 } else {
	    break;
	 }
}
	
	double tong;
	if ( so_km <= 1 ){
		tong = so_km * km_dau ;
		
	} else {
		tong = km_dau + ( so_km - 1 ) * km_hai;
	}
	
	double tien_tra = tong * thue ;
	cout <<"So tien can tra cho "<< so_km << " km la: " << tien_tra << "VND" << endl;
	return 0; 
}
